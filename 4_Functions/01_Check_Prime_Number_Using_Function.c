/*
Program: Check Prime Number using Function
Description: This program checks whether a number is prime or not
             using a dedicated function.

Concepts Used:
- functions
- loops
- conditional statements
- optimized checking (sqrt method)
*/

#include <stdio.h>

// 🔸 Function to check prime number
int isPrime(int n) {

    // Numbers less than 2 are NOT prime
    if (n <= 1)
        return 0;

    // Check divisibility from 2 to sqrt(n)
    for (int i = 2; i * i <= n; i++) {

        // If divisible → not prime
        if (n % i == 0)
            return 0;
    }

    // If no divisor found → prime
    return 1;
}

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Function call
    if (isPrime(num))
        printf("%d is a Prime number\n", num);
    else
        printf("%d is NOT a Prime number\n", num);

    return 0;
}
