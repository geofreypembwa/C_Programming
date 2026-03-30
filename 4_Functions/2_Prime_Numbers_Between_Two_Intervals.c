/*
Program: Prime Numbers Between Two Intervals
Description: Prints all prime numbers between two numbers using a function.

Concepts Used:
- functions
- loops (for)
- optimized prime checking
*/

#include <stdio.h>

// 🔸 Function to check prime number
int isPrime(int n) {

    if (n <= 1)
        return 0;

    // Check up to sqrt(n)
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;  // Not prime
    }

    return 1; // Prime
}

int main() {
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop through interval
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
