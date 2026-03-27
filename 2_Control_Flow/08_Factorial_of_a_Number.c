/*
Program: Factorial of a Number (Multiple Approaches)
Description: This program calculates factorial of a number N using:
             1. Loop method (iterative)
             2. Recursion method

Definition:
Factorial of N (N!) = N × (N-1) × (N-2) × ... × 1
Special case: 0! = 1

Concepts Used:
- Loops (for loop)
- Recursion
- Functions
*/

#include <stdio.h>

// 🔸 Method 1: Iterative (Loop-based)
unsigned long long factorialLoop(int n) {
    unsigned long long fact = 1;
    int i;

    // Multiply numbers from 1 to n
    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

// 🔸 Method 2: Recursive approach
unsigned long long factorialRecursive(int n) {
    // Base case: 0! or 1! = 1
    if (n == 0 || n == 1)
        return 1;

    // Recursive relation: n * (n-1)!
    return n * factorialRecursive(n - 1);
}

int main() {
    int n;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Edge case handling
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // 🔹 Loop method
    printf("Factorial using loop = %llu\n", factorialLoop(n));

    // 🔹 Recursion method
    printf("Factorial using recursion = %llu\n", factorialRecursive(n));

    return 0;
}
