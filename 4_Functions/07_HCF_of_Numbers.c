/*
===========================================================
Program: GCD (HCF) of Two Numbers - Multiple Methods

This program demonstrates different ways to find GCD:
1. Brute Force Method 
2. Euclidean Algorithm (Recursive)
3. Euclidean Algorithm (Iterative)

===========================================================
*/

#include <stdio.h>

//////////////////////////////////////////////
// 1. BRUTE FORCE METHOD
// Idea: Check all numbers from min(a,b) to 1
//////////////////////////////////////////////
int gcd_bruteforce(int a, int b) {
    int min = (a < b) ? a : b;

    for (int i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            return i; // first common divisor from top
        }
    }

    return 1;
}

/////////////////////////////////////////////////////
// 2. EUCLIDEAN METHOD (RECURSIVE)
// Idea: GCD(a, b) = GCD(b, a % b)
/////////////////////////////////////////////////////
int gcd_recursive(int a, int b) {
    if (b == 0)
        return a;

    return gcd_recursive(b, a % b);
}

/////////////////////////////////////////////////////
// 3. EUCLIDEAN METHOD (ITERATIVE - BEST APPROACH)
// Idea: keep replacing a = b, b = a % b
/////////////////////////////////////////////////////
int gcd_iterative(int a, int b) {
    int temp;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

/////////////////////////////////////////////////////
// MAIN FUNCTION - MENU DRIVEN
/////////////////////////////////////////////////////
int main() {
    int a, b, choice, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n===== GCD METHODS MENU =====\n");
    printf("1. Brute Force Method\n");
    printf("2. Euclidean (Recursive)\n");
    printf("3. Euclidean (Iterative)\n");
    printf("4. All Methods\n");
    printf("=============================\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            result = gcd_bruteforce(a, b);
            printf("GCD (Brute Force) = %d\n", result);
            break;

        case 2:
            result = gcd_recursive(a, b);
            printf("GCD (Recursive Euclidean) = %d\n", result);
            break;

        case 3:
            result = gcd_iterative(a, b);
            printf("GCD (Iterative Euclidean) = %d\n", result);
            break;

        case 4:
            printf("\n--- Results ---\n");
            printf("Brute Force     : %d\n", gcd_bruteforce(a, b));
            printf("Recursive EUCLID: %d\n", gcd_recursive(a, b));
            printf("Iterative EUCLID: %d\n", gcd_iterative(a, b));
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}




/* For n numbers
#include <stdio.h>

// Euclidean Algorithm (fast GCD)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Start with first element
    int result = arr[0];

    // Reduce GCD step by step
    for (int i = 1; i < n; i++) {
        result = gcd(result, arr[i]);
    }

    printf("GCD of all numbers = %d\n", result);

    return 0;
}
*/
