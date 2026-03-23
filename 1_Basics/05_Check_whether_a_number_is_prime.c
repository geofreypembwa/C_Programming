#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (a <= 1) {
        printf("%d is not a prime number.\n", a);
    } 
    else {
        int isPrime = 1; // Assume it's prime (1 = true)
        
        // Optimization: Loop only until the square root
        for (int i = 2; i * i <= a; i++) {
            if (a % i == 0) {
                isPrime = 0; // Found a factor, so it's not prime
                break;       // Stop the loop immediately
            }
        }

        if (isPrime == 1)
            printf("%d is a prime number.\n", a);
        else
            printf("%d is not a prime number.\n", a);
    }

    return 0;
}
