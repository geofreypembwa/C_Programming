/*
Program: Check Palindrome Number
Description: This program checks whether a given integer is a palindrome.
             A palindrome number remains the same when reversed.

Concepts Used:
- Functions
- while loop
- modulus (%) and division (/)
- reversing a number
*/

#include <stdio.h>

// 🔸 Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;       // Extract last digit
        reversed = reversed * 10 + digit; // Build reversed number
        num = num / 10;             // Remove last digit
    }

    return reversed;
}

// 🔸 Function to check palindrome
int isPalindrome(int num) {
    // Negative numbers are not palindrome
    if (num < 0)
        return 0;

    return num == reverseNumber(num);
}

int main() {
    int num;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check and print result
    if (isPalindrome(num)) {
        printf("%d is a Palindrome number\n", num);
    } else {
        printf("%d is NOT a Palindrome number\n", num);
    }

    return 0;
}
