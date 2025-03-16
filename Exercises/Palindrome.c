#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifndef __cplusplus
typedef unsigned char bool;
static const bool False = 0;
static const bool True = 1;
#endif

// function prototype
bool isPalindrome(char string[], size_t start, size_t end);

// function main begins program execution
int main(void) {
    // prompt user for number of characters
    printf("%s", "Input number of characters for word (i.e. 5): ");
    size_t wordSize = 0; // size of 1-D array
    scanf("%d", &wordSize); 

    // initialize word of size arraySize
    char word[wordSize+1];

    // input word with specified arraySize
    printf("%s", "Input word with specified characters (i.e. 5 -> radar): ");
    scanf("%s", word);

    // check if the word is a palindrome or not
    if (isPalindrome(word, 0, wordSize-1)){
        printf("%s is a palindrome.\n", word);
    } else {
        printf("%s is not a palindrome.\n", word);
    }
}

bool isPalindrome(char string[], size_t start, size_t end){
    if (start >= end) { // base case 1: valid palindrome
        return True;
    }      
    
    if (string[start] != string[end]){ // base case 2: invalid palindrome
        return False;
    } 

    else { // recursive case
        return isPalindrome(string, start+1, end-1);
    }
}