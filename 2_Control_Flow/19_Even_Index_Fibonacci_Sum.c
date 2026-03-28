/*
Program: Sum of Fibonacci Numbers at Even Indexes
Description: This program calculates the sum of Fibonacci numbers
             at even indices up to N terms.

Concepts Used:
- loops (for)
- Fibonacci sequence
- index-based condition (i % 2 == 0)
*/

#include <stdio.h>

// 🔸 Function to calculate sum of even-index Fibonacci numbers
int evenIndexFiboSum(int n) {
    int a = 0, b = 1, next;
    int sum = 0;

    // Loop through Fibonacci indices
    for (int i = 0; i <= 2 * n; i++) {

        // Check for even index
        if (i % 2 == 0) {
            sum += a;
        }

        // Generate next Fibonacci number
        next = a + b;
        a = b;
        b = next;
    }

    return sum;
}

int main() {
    int n;

    // Input from user
    printf("Enter value of n: ");
    scanf("%d", &n);

    int result = evenIndexFiboSum(n);

    printf("Sum of Fibonacci numbers at even indexes = %d\n", result);

    return 0;
}
