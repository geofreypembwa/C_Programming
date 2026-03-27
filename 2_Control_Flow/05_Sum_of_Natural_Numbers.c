/*
Program: Sum of Natural Numbers using Multiple Approaches
Description: This program calculates the sum of first n natural numbers
             using different methods:
             1. while loop
             2. for loop
             3. recursion
             4. function
             5. mathematical formula

Concepts Used:
- Loops (while, for)
- Recursion
- Functions
- Arithmetic formula
*/

#include <stdio.h>

// 🔸 Approach 3: Recursion
int sumRecursive(int n) {
    // Base case: stop when n reaches 0
    if (n == 0)
        return 0;

    // Recursive case: n + sum of previous numbers
    return n + sumRecursive(n - 1);
}

// 🔸 Approach 4: Function using loop
int sumFunction(int n) {
    int i, sum = 0;

    for (i = 1; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    int n, i;

    // Input from user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 🔹 Approach 1: While loop
    int sumWhile = 0;
    i = 1;

    while (i <= n) {
        sumWhile += i;
        i++;
    }

    printf("Sum using while loop = %d\n", sumWhile);

    // 🔹 Approach 2: For loop
    int sumFor = 0;

    for (i = 1; i <= n; i++) {
        sumFor += i;
    }

    printf("Sum using for loop = %d\n", sumFor);

    // 🔹 Approach 3: Recursion
    int sumRec = sumRecursive(n);
    printf("Sum using recursion = %d\n", sumRec);

    // 🔹 Approach 4: Function
    int sumFunc = sumFunction(n);
    printf("Sum using function = %d\n", sumFunc);

    // 🔹 Approach 5: Formula
    int sumFormula = n * (n + 1) / 2;
    printf("Sum using formula = %d\n", sumFormula);

    return 0;
}
