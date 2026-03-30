/*
Program: Floyd's Triangle
Description: Prints numbers in a triangular pattern continuously.

Concepts Used:
- nested loops
- counter variable
*/

#include <stdio.h>

int main() {
    int n, c = 1;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Outer loop → controls rows
    for (int i = 1; i <= n; i++) {

        // Inner loop → prints numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d ", c);  // print current number
            c++;               // move to next number
        }

        printf("\n"); // move to next line
    }

    return 0;
}
