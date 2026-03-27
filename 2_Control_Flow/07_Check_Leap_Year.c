/*
Program: Check Leap Year
Description: This program checks whether a given year is a leap year or not.

Concepts Used:
- if-else statements
- Logical operators (&&, ||)
- Modulus operator (%)
*/

#include <stdio.h>

int main() {
    int year;

    // Take input from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year logic:
    // A year is a leap year if:
    // 1. It is divisible by 400 OR
    // 2. It is divisible by 4 AND not divisible by 100

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a Leap Year.\n", year);
    }
    else {
        printf("%d is NOT a Leap Year.\n", year);
    }

    return 0;
}
