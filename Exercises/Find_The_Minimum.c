#include <stdio.h>
#define SIZE 5
#define INT_MAX 2147483647

// function prototype
int findMinimum(int array[], size_t size, int minimum);

// function main begins program execution 
int main(void) {
    int array[SIZE] = {5, 3, 1, -8, 2};
    int minimum = findMinimum(array, SIZE, INT_MAX);

    printf("The minimum value of the array is %d\n",minimum);
    
    return (0);
}

// recursive function to calculate the minimum element of an array
int findMinimum(int array[], size_t size, int minimum){
    if (size == 0){ // base case
        return minimum;
    }

    if (array[SIZE - size] < minimum){
        // update minimum value of array 
        minimum = array[SIZE - size];
    }

    // recursive case
    findMinimum(array, size-1, minimum);
}