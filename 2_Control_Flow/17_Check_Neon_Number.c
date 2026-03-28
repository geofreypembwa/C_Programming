/*
Program: Check Neon Number
Description: This program checks whether a given number is a Neon number.
             A Neon number is a number where the sum of digits of its square
             is equal to the original number.

Concepts Used:
- Functions
- while loop
- modulus (%) and division (/)
- arithmetic operations
*/

#include <stdio.h>

// 🔸 Function to check Neon number
int isNeon(int num) {
    int square = num * num;  // Step 1: Find square
    int sum = 0;

    // Step 2: Find sum of digits of the square
    while (square != 0) {
        int digit = square % 10; // Extract last digit
        sum += digit;
        square = square / 10;    // Remove last digit
    }

    // Step 3: Compare sum with original number
    return (sum == num);
}

int main() {
    int num;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check and display result
    if (isNeon(num)) {
        printf("%d is a Neon number\n", num);
    } else {
        printf("%d is NOT a Neon number\n", num);
    }

    return 0;
}
