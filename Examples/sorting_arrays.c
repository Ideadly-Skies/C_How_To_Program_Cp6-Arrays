// fig06_12.c
// Sorting an array's values into ascending order.
#include <stdio.h>
#define SIZE 10

// function main begins program execution
int main(void){
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    puts("Data items in original order");

    // output original array
    for(size_t i = 0; i < SIZE; i++){
        printf("a[%zu] = %d\n",i,a[i]);
    }

    // bubble sort
    // loop to control number of passes
    // on the first pass, the largest value is guaranteed to sink to the
    // array's bottom element.

    // the second pass, second largest value is guaranteed to sink to the 
    // array's ninth position.
    for (int pass = 1; pass < SIZE; ++pass){
        for (size_t i = 0; i < SIZE-1; i++){
            // compare adjacent elements and swap them if first
            // element is greater than second element
            if (a[i] > a[i+1]){
                int hold = a[i];
                a[i] = a[i+1];
                a[i+1] = hold;
            }
        } 
    }

    // data items in ascending order
    puts("\nData items in ascending order");

    // output sorted array
    for(size_t i = 0; i < SIZE; i++){
        printf("a[%zu] = %d\n",i,a[i]);
    }

    // main function returns 0
    return (0);
}