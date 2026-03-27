/*
Program: Fibonacci Series using Loops
Description: Prints first n terms of Fibonacci series

Concepts Used:
- loops (for loop)
- variables tracking previous values
- user input handling
*/

#include <stdio.h>

void printFibonacci(int n) {

    int first = 0, second = 1, next;

    // Handle invalid input
    if (n <= 0) {
        printf("Invalid number of terms\n");
        return;
    }

    printf("Fibonacci Series:\n");

    for (int i = 1; i <= n; i++) {

        // Print first two terms directly
        if (i == 1) {
            printf("%d ", first);
            continue;
        }
        if (i == 2) {
            printf("%d ", second);
            continue;
        }

        // Generate next term
        next = first + second;
        first = second;
        second = next;

        printf("%d ", next);
    }

    printf("\n");
}

int main() {
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printFibonacci(n);

    return 0;
}
