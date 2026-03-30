/*
Program: Pascal's Triangle
Description: Prints Pascal's Triangle in a simple way.

Concepts Used:
- nested loops
- pattern printing
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        int value = 1;  // First number in every row is 1

        // Print numbers in row
        for (int k = 0; k <= i; k++) {
            printf("%d ", value);

            // Generate next value
            value = value * (i - k) / (k + 1);
        }

        printf("\n");
    }

    return 0;
}
