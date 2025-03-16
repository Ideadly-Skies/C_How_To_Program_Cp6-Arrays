// fig06_07.c
// roll two six figure sided die 36000 times
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 13

// function prorotype
int sumList(int freq[], size_t p);

// function main begins program execution
int main(void){
    srand(time(NULL));         // seed random number generator

    int frequency[SIZE] = {0}; // initialize all frequency1 counts to 0
    
    // roll die 36000 times
    for(size_t roll = 1; roll <= 36000; roll++){
        int face1 = 1 + rand() % 6;
        int face2 = 1 + rand() % 6;

        // tally the sum of the faces
        ++frequency[face1 + face2];
    }

    // output face and frequency
    printf("%s%17s\n", "Face", "Frequency");

    // output frequency elements 1-6 in tabular form
    for (size_t face = 1; face < SIZE; ++face){
        printf("%4zu%17d\n",face, frequency[face]);
    }

    // print out the total
    printf("%s%16d\n", "Total", sumList(frequency, SIZE));

    // return statement
    return (0);
}

int sumList(int freq[], size_t p) {
    if (1 == p) { // base case
        return freq[0];
    }
    else { // recursion step
        return freq[p-1] + sumList(freq, p-1);
    } 
}