// Program to add two complex numbers

#include <stdio.h>

int main() {
    float real1, imag1;
    float real2, imag2;
    float realSum, imagSum;

    // Input first complex number
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &real1, &imag1);

    // Input second complex number
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &real2, &imag2);

    // Adding real and imaginary parts separately
    realSum = real1 + real2;
    imagSum = imag1 + imag2;

    // Display result
    printf("Sum = %.2f + %.2fi\n", realSum, imagSum);

    return 0;
}
