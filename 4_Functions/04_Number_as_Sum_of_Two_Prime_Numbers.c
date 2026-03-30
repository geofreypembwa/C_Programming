/*
Program: Check if a number can be expressed as sum of two prime numbers

Concepts Used:
- functions
- loops
- prime checking
*/

#include <stdio.h>

// 🔸 Function to check prime
int isPrime(int n) {

    if (n <= 1)
        return 0;

    // Optimized check (up to sqrt(n))
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int n, found = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Try all pairs (i, n-i)
    for (int i = 2; i <= n / 2; i++) {

        // Check both numbers are prime
        if (isPrime(i) && isPrime(n - i)) {

            printf("Yes, %d = %d + %d\n", n, i, n - i);
            found = 1;
            break; // stop after first pair
        }
    }

    if (!found) {
        printf("No, cannot be expressed as sum of two primes\n");
    }

    return 0;
}
