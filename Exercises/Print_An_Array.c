#include <stdio.h>
#define SIZE 5

// array prototype
void printArray(char string[], size_t size);

// main function
int main(void) {
    // initialize string char array 
    char string[SIZE+1] = "hello";

    // print the array recursively
    printArray(string, SIZE);

    // return statement
    return (0);
}

void printArray(char string[], size_t size){
    if (size == 0){ // base case
        return;
    }
    
    // print the ith character (helped by gpt)
    printf("%c\n", string[SIZE - size]);

    // recursive case
    printArray(string, size - 1);
}