#include <stdio.h>

int main(void){
    double c[5] = {2.0, 3.1, 2.3, 3.5, 5.5}; 
    double product;

    // display the int product of the values contained in
    // the first four elements of int array grades
    product = c[0] * c[1] * c[2] * c[3];
    printf("product of %.1f * %.1f * %.1f * %.1f = %.2f\n", c[0], c[1], c[2], c[3],product); 

    return (0);
}