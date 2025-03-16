// fig06_08.c
// Treating character arrays as strings
#include <stdio.h>
#define SIZE 20

// function main begins program execution
int main(void){
    char string1[SIZE] = "";           // reserves 20 characters
    char string2[] = "string literal"; // reserves 15 characters

    // prompt for string from user then read it into array string1
    printf("%s", "Enter a string (no longer than 19 characters): ");
    scanf("%19s", string1);

    // output strings
    printf("string1 is: %s\nstring2 is: %s\n", string1, string2);
    printf("%s", "string1 with spaces between character is: ");

    // output characters until null character is reached
    for (size_t i = 0; i < SIZE && string1[i] != '\0'; ++i){
        printf("%c ", string1[i]);
    }

    // input newline
    puts("");

    // return statement
    return (0);
}