/*
Program: Sum of Natural Numbers using Recursion
Description: Calculates sum from 1 to n using recursive function

Concepts Used:
- recursion
- base condition
- function calls
*/

#include <stdio.h>

// 🔸 Recursive function
int recSum(int n) {

    // Base condition (stops recursion)
    if (n <= 1)
        return n;

    // Recursive call
    return n + recSum(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum = %d\n", recSum(n));

    return 0;
}
