#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 7 

int main(void){
    double n[ARRAY_SIZE]; // array of 7 integers
    
    // output face and frequency
    printf("%s%15s\n", "Element", "Value");    

    // set elements to 10
    for (size_t i = 0; i < ARRAY_SIZE; i++){
        // set n[i] to 10 
        n[i] = 10.0;        

        // print the value
        printf("%4zu%17.1f\n",i, n[i]);
    }

    // return statement
    return (0);
}