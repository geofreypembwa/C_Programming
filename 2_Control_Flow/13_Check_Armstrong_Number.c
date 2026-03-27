/*
Program: Check Armstrong Number
Description: This program checks whether a number is Armstrong or not.

Concepts Used:
- loops (while)
- modulus operator (%)
- arithmetic operations
- pow() function from math.h
*/

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, temp, digit, count = 0;
    double sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    // Step 1: Count number of digits
    while (temp != 0) {
        temp = temp / 10;
        count++;
    }

    temp = num;

    // Step 2: Calculate sum of digits^count
    while (temp != 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    // Step 3: Check result
    if ((int)sum == original) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is NOT an Armstrong number\n", num);
    }

    return 0;
}
