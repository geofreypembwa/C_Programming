/*
Program: Simple Calculator using switch-case
Description: This program performs basic arithmetic operations:
             addition, subtraction, multiplication, and division
             based on user input.

Concepts Used:
- switch-case statement
- Arithmetic operators
- User input handling
*/

#include <stdio.h>

int main() {
    char op;
    double a, b, result;

    // Take operator input from user
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  // space before %c handles newline issue

    // Take operands
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    // Perform operation based on operator
    switch (op) {

        case '+':
            result = a + b;
            printf("Result = %.2lf\n", result);
            break;

        case '-':
            result = a - b;
            printf("Result = %.2lf\n", result);
            break;

        case '*':
            result = a * b;
            printf("Result = %.2lf\n", result);
            break;

        case '/':
            // Prevent division by zero
            if (b != 0)
                result = a / b;
            else {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }

            printf("Result = %.2lf\n", result);
            break;

        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
