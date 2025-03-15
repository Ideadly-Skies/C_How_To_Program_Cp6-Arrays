// fig06_04.c
// computing the sum of the elements of an array
#include <stdio.h>
#define SIZE 5

// function main begins program execution
int main(void){
    // use an initializer list to initialize the array
    int a[SIZE] = {1, 2, 3, 4, 5};
    int total = 0;

    // sum the content of the array
    for (size_t i = 0; i < SIZE; i++){
        total += a[i];
    }

    // print total
    printf("The total of a's value is %d\n", total);

    // return statement
    return(0);
}