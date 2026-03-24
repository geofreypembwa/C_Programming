// Program to multiply two numbers entered by the user

#include <stdio.h>

int main() {
    float num1, num2, product;

    // Prompt user for input
    printf("Enter two numbers (separated by space): ");
    scanf("%f %f", &num1, &num2);

    // Calculate product
    product = num1 * num2;

    // Display result
    printf("Product: %.2f\n", product);

    return 0;
}