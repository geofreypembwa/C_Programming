/*
Program: Reverse a Number
Description: This program takes an integer from the user and 
             reverses its digits.

Concepts Used:
- while loop
- modulus operator (%)
- division operator (/)
- functions
*/

#include <stdio.h>

// 🔸 Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;

    // Loop until the number becomes 0
    while (num != 0) {
        int digit = num % 10;  // Extract last digit

        // Shift existing digits left and add new digit
        reversed = reversed * 10 + digit;

        num = num / 10;  // Remove last digit
    }

    return reversed;
}

int main() {
    int num, result;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    //For negative numbers 
    if (num < 0) {
    int reversed = reverseNumber(-num);
    printf("Reversed number = -%d\n", reversed);
    }
    
    else {
    // Call function
    result = reverseNumber(num);

    // Output result
    printf("Reversed number = %d\n", result);
    }
    
    return 0;
}
