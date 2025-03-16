// because the array's starting address is passed, the called function
// knows exactly where the array is stored. So, any modifications the called
// function makes to the array elements change the values of the original array's
// element inside the caller

// fig06_10.c
// Array name is the same as the address of the array's first element
#include <stdio.h>

// arrays can also be passed by value by using a struct
int main(void){
    char array[5] = ""; // define an array of size 5
    
    printf("    array = %p\n&array[0] = %p\n    &array = %p\n", array, &array[0], &array);
    
    return (0);
}