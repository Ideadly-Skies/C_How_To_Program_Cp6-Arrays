// fig06_06.c
// Displaying a bar chart.
#include <stdio.h>
#define SIZE 5

// function main begins program execution
int main(void) {
    // use an initializer list to initialize array n
    int n[SIZE] = {19, 3, 15, 7, 11};
    
    // print element value and bar chart value
    printf("%s%13s%17s\n", "Element", "Value", "Bar Chart");

    // for each element of array n, output a bar of the bar chart
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%7zu%13d%8s", i+1, n[i], "");

        for(int j = 1; j <= n[i]; j++){ // print one bar
            printf("%c", '*'); 
        }

        puts(""); // end a bar with a newline
    }
}