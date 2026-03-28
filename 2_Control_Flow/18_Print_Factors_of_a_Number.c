/*
Program: Find Divisors of a Number (Naive Method)
Description: This program prints all divisors of a given number
             by checking every number from 1 to n.

Concepts Used:
- for loop
- modulus operator (%)
*/

#include <stdio.h>

// Function to print divisors
void printDivisors(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {  // Check if i divides n
            printf("%d ", i);
        }
    }
}

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Divisors of %d are: ", num);
    printDivisors(num);

    return 0;
}
