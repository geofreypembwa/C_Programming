/*
Program: Armstrong Numbers in a Range
Description: This program prints all Armstrong numbers between 
             two numbers given by the user.

Concepts Used:
- loops (for, while)
- modulus operator (%)
- functions
- pow() from math.h
*/

#include <stdio.h>
#include <math.h>

// 🔸 Function to check if a number is Armstrong
int isArmstrong(int num) {
    int original = num, temp = num;
    int digit, count = 0;
    double sum = 0;

    // Step 1: Count number of digits
    while (temp != 0) {
        temp = temp / 10;
        count++;
    }

    temp = num;

    // Step 2: Calculate sum of digits^count
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp = temp / 10;
    }

    // Step 3: Check if Armstrong
    if ((int)sum == original)
        return 1;  // True
    else
        return 0;  // False
}

int main() {
    int start, end, i;

    // Input range
    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    // Loop through the range
    for (i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
