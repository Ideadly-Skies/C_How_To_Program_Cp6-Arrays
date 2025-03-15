// fig06_03.c
// Initializing the elements of array s to the even integers from 2 to 10.
#include <stdio.h>
#define SIZE 5 // maximum size of array

// function main begins program execution
int main(void) {
    // symbolic constant SIZE can be used to specify the array size
    int s[SIZE];

    // initialize the array to hold zeros
    for (size_t i = 0; i < SIZE; i++){
        s[i] = i;
    } 

    // print the element and value
    printf("%s%8s\n", "Element", "Value");
    
    for (size_t i = 0; i < SIZE; i++){
        printf("%7zu%7d\n", i, s[i]);
    }

    // return statement
    return (0);
} 