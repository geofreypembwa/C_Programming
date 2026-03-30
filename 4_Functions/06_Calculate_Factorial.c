#include <stdio.h>

unsigned long long factorial(int n) {
    unsigned long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

unsigned long long Recursive_factorial(int n) {

    if (n == 0 || n == 1)
        return 1;

    return n * Recursive_factorial(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Loop Factorial = %llu\n", factorial(n));
    printf("Recursive Factorial = %llu\n", Recursive_factorial(n));

    return 0;
}
