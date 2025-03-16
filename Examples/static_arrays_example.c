// fig06_09.c
// static arrays are initialized to zero if not explicitly initialized.
#include <stdio.h>

void staticArrayInit(void);     // function prototype
void automaticArrayInit(void);  // function prototype

// function main begins program execution
int main(void){
    puts("First call to each function:");
    staticArrayInit();
    automaticArrayInit();

    puts("\n\nSecond call to each function:");
    staticArrayInit();
    automaticArrayInit();
    puts("");
}

// function to demonstrate a static local array
void staticArrayInit(void) {
    // a static local variable exists for the program's duration
    // but is visible only in the function's body. created only once
    // which reduces program execution time. 
    static int array1[3];

    puts("\nValues on entering staticArrayInt:");

    // output contents of array1
    for(size_t i = 0; i <= 2; i++){
        printf("array1[%zu] = %d    ", i, array1[i]);
    }

    puts("\nValues on exiting staticArrayInt:");

    // modify and output contents of array1
    for (size_t i = 0; i <= 2; i++){
        printf("array1[%zu] = %d    ", i, array1[i] += 5);
    }
}

// function to demonstrate an automatic local array
void automaticArrayInit(void){
    // initializes elements each time function is called
    int array2[3] = {1, 2, 3};

    puts("\n\nValues on entering automaticArrayInit:");

    // output contents of array2
    for(size_t i = 0; i <= 2; i++){
        printf("array2[%zu] = %d    ", i, array2[i]);
    }

    puts("\nValues on exiting automaticArrayInit:");

    // modify and output contents of array2
    for (size_t i = 0; i <= 2; ++i){
        printf("array2[%zu] = %d    ", i, array2[i] += 5);
    }
}