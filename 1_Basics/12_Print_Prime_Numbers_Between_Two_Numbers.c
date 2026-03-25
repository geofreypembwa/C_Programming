// Program to print prime numbers between two numbers

#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    // Input range
    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    // Loop through the range
    for (i = start; i <= end; i++) {
        if (i < 2)
            continue;

        isPrime = 1;

        // Check if number is prime
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        // Print prime numbers
        if (isPrime) {
            printf("%d ", i);
        }
    }

    return 0;
}
