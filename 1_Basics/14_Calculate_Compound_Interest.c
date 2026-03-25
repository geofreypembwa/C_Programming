// Program to calculate Compound Interest
// Using both formula and loops

#include <stdio.h>

int main() {
    float principal, rate, time;
    int n, i;

    // Input values
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);

    // ----------------------------------------
    // Method 1: Using formula (without math.h)
    // A = P (1 + R/(100*n))^(n*t)
    // CI = A - P
    // ----------------------------------------
    float base = 1 + (rate / (100 * n));
    int totalPeriods = n * time;
    float power = 1;

    for (i = 1; i <= totalPeriods; i++) {
        power = power * base;
    }

    float amount_formula = principal * power;
    float ci_formula = amount_formula - principal;

    printf("\nUsing Formula :\n");
    printf("Compound Interest = %.2f\n", ci_formula);
    printf("Total Amount = %.2f\n", amount_formula);

    // ----------------------------------------
    // Method 2: Using loops (step-by-step)
    // ----------------------------------------
    float amount_loop = principal;

    for (i = 1; i <= totalPeriods; i++) {
        amount_loop = amount_loop * base;
    }

    float ci_loop = amount_loop - principal;

    printf("\nUsing Loops (step-by-step compounding):\n");
    printf("Compound Interest = %.2f\n", ci_loop);
    printf("Total Amount = %.2f\n", amount_loop);

    return 0;
}
