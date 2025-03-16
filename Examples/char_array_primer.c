// 6.5 - using character arrays to store and manipulate strings
#include <stdio.h>

int main(void){
    // initializing char array with string
    char string1[] = "first";

    // char array initializer with terminating char
    char string2[] = {'f', 'i', 'r', 's', 't', '\0'};

    // how to read a string into char array
    char string3[20];
    scanf("%19s", string3);
    
    // outputting char array that represent a string
    printf("string inputted: %s\n", string3);

    

    // return statement
    return (0);
}