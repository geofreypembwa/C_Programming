/*
Program: Roots of Quadratic Equation
Description: Finds roots based on discriminant value

Concepts Used:
- functions
- conditional statements
- math functions (sqrt)
*/

#include <stdio.h>
#include <math.h>

// 🔸 Function to find roots
void findRoots(double a, double b, double c) {

    double D = b * b - 4 * a * c;

    // Case 1: Real and different
    if (D > 0) {
        double root1 = (-b + sqrt(D)) / (2 * a);
        double root2 = (-b - sqrt(D)) / (2 * a);

        printf("Roots are real and different\n");
        printf("Root1 = %.2lf\n", root1);
        printf("Root2 = %.2lf\n", root2);
    }

    // Case 2: Real and same
    else if (D == 0) {
        double root = -b / (2 * a);

        printf("Roots are real and same\n");
        printf("Root = %.2lf\n", root);
    }

    // Case 3: Complex roots
    else {
        double real = -b / (2 * a);
        double imag = sqrt(-D) / (2 * a);

        printf("Roots are complex\n");
        printf("Root1 = %.2lf + %.2lfi\n", real, imag);
        printf("Root2 = %.2lf - %.2lfi\n", real, imag);
    }
}

int main() {
    double a, b, c;

    printf("Enter values of a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Check if quadratic
    if (a == 0) {
        printf("Not a quadratic equation\n");
        return 0;
    }

    findRoots(a, b, c);

    return 0;
}
