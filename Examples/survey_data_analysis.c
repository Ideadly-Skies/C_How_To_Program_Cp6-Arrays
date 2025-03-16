// fig06_13.c
// Survey data analysis with arrays:
// computing the mean, median, and mode of the data
#include <stdio.h>
#define SIZE 99

// function prototypes
void mean(const int answer[]);
void median(int answer[]);
void mode(int freq[], const int answer[]);
void bubbleSort(int a[]);
void printArray(const int a[]);

// function main begins program execution
int main(void) {
    int frequency[10] = {0}; // initialize array frequency 

    // initialize array response
    int response[SIZE] = 
        {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
        7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
        6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
        7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
        6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
        7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
        5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
        7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
        7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
        4, 5, 6, 1, 6, 5, 7, 8, 7};

    // process reponses
    mean(response);
    median(response);
    mode(frequency, response);
}

// calculate average of all response values
void mean(const int answer[]){
    printf("%s\n%s\n%s\n", "--------", "  Mean", "--------");

    int total = 0; // variable to hold sum of array elements

    // total response
    for (size_t j = 0; j < SIZE; j++) {
        total += answer[j];
    }

    printf("The mean is the average value of the data\n"
           "items. The mean is equal to the total of\n"
           "all the data items divided by the number\n"
           "of data items (%u). The mean value for\n"
           "this run is: %u / %u = %.4f\n\n",
           SIZE, total, SIZE, (double) total / SIZE);
}

// sort array and determine median element's value
void median(int answer[]) {
    printf("\n%s\n%s\n%s\n%s", "--------", "Median", "--------");

    printArray(answer); // output unsorted array
    bubbleSort(answer); // sort array

    printf("%s", "\n\nThe sorted array is");
    printArray(answer); // output sorted array

    // Display median element
    printf("\n\nThe median is element %u of\n"
           "the sorted %u element array.\n"
           "for this run the median is %u\n\n",
           SIZE / 2, SIZE, answer[SIZE/2]);
}

// determine the most frequent response
void mode(int freq[], const int answer[]){
    printf("\n%s\n%s\n%s\n", "--------", "mode", "--------");

    // initialize frequencies to 0
    for (size_t rating = 1; rating <= 9; rating++) {
        freq[rating] = 0;
    }

    // summarize frequencies
    for (size_t j = 0; j < SIZE; ++j) {
        ++freq[answer[j]];
    }

    // output headers for result columns
    printf("%s%11s%19s\n\n%54s\n%54s\n\n",
           "Response", "Frequency", "Bar Chart",
           "1    1    2    2", "5    0    5    0    5");
    
    // output results
    int largest = 0;   // represents the largest frequency
    int modeValue = 0; // represents most frequent response
    
    for (size_t rating = 1; rating <= 9; ++rating){
        printf("%8zu%11d        ", rating, freq[rating]);

        // keep track of mode value and largest frequency value
        if (freq[rating] > largest){
            largest = freq[rating];
            modeValue = rating;
        }

        // output bar representing frequency value
        for (int h = 1; h <= freq[rating]; h++){
            printf("%s", "*");
        }

        puts(""); // being new line of output

    }
    
    // display the mode value
    printf("\nThe mode is the most frequent value.\n"
           "For this run the mode is %d which occurred %d times.\n",
           modeValue, largest
    );
}

// function that sorts an array with bubble sort algorithm
void bubbleSort(int a[]) {
    // loop to control the size pass
    for (int pass = 1; pass < SIZE; pass++) {
        for (size_t i = 0; i < SIZE-1; i++) {
            if (a[i] > a[i+1]){
                int temp = a[i+1];
                a[i+1] = a[i];
                a[i] = temp;
            }
        }
    }
}

// output array contents
void printArray(const int a[]) {
    // output array contents
    for (size_t j = 0; j < SIZE; j++) {

        if (j % 20 == 0){ // begin new line every 20 values
            puts("");
        }

        printf("%2d", a[j]);
    }
}