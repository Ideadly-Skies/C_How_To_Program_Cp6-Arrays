// fig06_17.c
// Two dimensional array manipulations.
#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

// function prototypes
int minimum(const int grades[][EXAMS], size_t pupils, size_t tests);
int maximum(const int grades[][EXAMS], size_t pupils, size_t tests);
double average(const int setOfGrades[], size_t tests);
void printArray(const int grades[][EXAMS], size_t pupils, size_t tests);

// function main begins program execution
int main(void) {
    // initialize student grades for three students
    int studentGrades[STUDENTS][EXAMS] = 
    {{77, 68, 86, 73},
     {96, 87, 89, 78},
     {70, 90, 86, 81}};

    // output array studentGrades
    puts("The array is:");
    printArray(studentGrades, STUDENTS, EXAMS);

    // determine smallest and largest grade values
    printf("\n\nLowest grade: %d\nHighest grade: %d\n",
        minimum(studentGrades, STUDENTS, EXAMS),
        maximum(studentGrades, STUDENTS, EXAMS));

    // calculate average grade for each student
    for (size_t student = 0; student < STUDENTS; ++student){
        printf("The average grade for students %zu is %.2f\n",
            student, average(studentGrades[student], EXAMS));
    }
}

// Find the minimum grade
int minimum(const int grades[][EXAMS], size_t pupils, size_t tests) {
    int lowGrade = 100; // initialize to highest possible grade

    // loop through rows of grades
    for (size_t row = 0; row < pupils; ++row) {
        // loop through columns of grades
        for (size_t col = 0; col < tests; ++col){
            if (grades[row][col] < lowGrade){
                lowGrade = grades[row][col];
            }
        }
    }
    
    return lowGrade;
}

// Find the maximum grade
int maximum(const int grades[][EXAMS], size_t pupils, size_t tests) {
    int highGrade = 0; // initialize to highest possible grade

    // loop through rows of grades
    for (size_t row = 0; row < pupils; ++row) {
        // loop through columns of grades
        for (size_t col = 0; col < tests; ++col){
            if (grades[row][col] > highGrade){
                highGrade = grades[row][col];
            }
        }
    }
    
    return highGrade;
}

// determine the average grade for a particular student
double average(const int setOfGrades[], size_t tests) {
    int total = 0; // sum of test grades

    // total all grades for one student
    for (size_t test = 0; test < tests; test++){
        total += setOfGrades[test]; 
    }

    return (double) total / tests; 
}

// print the array
void printArray(const int grades[][EXAMS], size_t pupils, size_t tests) {
    // output column heads
    printf("%s", "                 [0]  [1]  [2]  [3]");

    // output grades in tabular format
    for (size_t row = 0; row < pupils; ++row) {
        // output label for row
        printf("\nstudentGrades[%zu] ", row);

        // output grades for one student
        for (size_t column = 0; column < tests; ++column) {
            printf("%-5d", grades[row][column]);
        }
    }
}