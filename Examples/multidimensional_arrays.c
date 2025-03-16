// arrays can have multiple subscripts. A common use of multidimensional arrays is to represent table of values consisting of information arranged in rows and columns
// specify two subscripts:
    // The first (by convention) identifies the element's row
    // the second (by convention) identifies the element's column

// The array contains three rows and four columns so it's said to be 3 x 4 array
// referencing a two-dimensional array element as a[x, y] is a logic error
// C treats a[x, y] as a[y].

// fig06_16.c
// Initializing multidimensional arrays.
#include <stdio.h>

void printArray(int a[][3]); // function prototype

// function main begins program execution
int main(void){
    int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    puts("Values in array1 by row are:");
    printArray(array1);

    int array2[2][3] = {{1, 2, 3}, {4, 5}};
    puts("Values in array2 by row are:");
    printArray(array2);

    int array3[2][3] = {{1, 2}, {4}};
    puts("Values in array3 row are:");
    printArray(array3);

    return (0);
}

// function to output array with two rows and three columns
void printArray(int a[][3]){
    // loop through rows
    for (size_t i = 0; i <= 1; i++) {
        // output column values
        for (size_t j = 0; j <= 2; j++) {
            printf("%d ", a[i][j]);
        }

        puts(""); // start new line of output
    }
}