/*Write a program to print a full pyramid pattern. The pyramid should have a specified number of rows, and each row should be aligned to form a symmetric structure, like the example shown below. Replace "n" with the desired height (e.g., 5 rows):
             *
            ***
           *****
          ******** 
         **********
        ************     */

#include<stdio.h>
int main() {

    int n = 10;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces for each row
        for (int j = 1; j <= n - i; j++) {
            printf(" ");  // Printing spaces
        }

        // Print stars for each row
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");  // Printing stars
        }

        // Move to the next line after each row
        printf("\n");
    }
    return 0;
}
   