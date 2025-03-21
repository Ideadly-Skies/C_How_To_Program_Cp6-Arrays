// fig06_11.c
// Passing arrays and individual array elements to function
#include <stdio.h>
#define SIZE 5

// function prototype
void modifyArray(int b[], size_t size);
void modifyElement(int e);

// function main begins program execution
int main(void){
    int a[SIZE] = {0, 1, 2, 3, 4}; // initialize array a

    puts("Effects of of passing entire array by reference:\n\nThe "
        "values of the original array are:");

    // output original array
    for (size_t i = 0; i < SIZE; ++i){
        printf("%3d", a[i]);
    }

    puts(""); // outputs a newline

    modifyArray(a, SIZE); // pass array a to modifyArray by reference    
    puts("The values of the modified array are:");

    // output modified array
    for (size_t i = 0; i < SIZE; ++i){
        printf("%3d", a[i]);
    }
    
    // output value of a[3]
    printf("\n\nEffects of passing array element "
       "by value:\n\nThe value of a[3] is %d\n", a[3]);

    
    modifyElement(a[3]); // pass array element a[3] by value

    // output value of a[3]
    printf("The value of a[3] is %d\n", a[3]);

    // return value
    return(0);
}

// in function modifyArray, "b" points to the original array "a" in memory
void modifyArray(int b[], size_t size){
    // multiply each array element by 2
    for(size_t i = 0; i < size; i++){
        b[i] *= 2; // actually modifies original array
    }
}

// in function modifyElement, "e" is a local copy of array element
// a[3] passed from main
void modifyElement(int e){
    e *= 2; // multiply parameter by 2
    printf("Value in modifyElement is %d\n", e);
}