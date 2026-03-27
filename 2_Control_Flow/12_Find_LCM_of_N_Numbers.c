/*
Program: Find LCM of N Numbers
Description: This program calculates the LCM of multiple numbers
             entered by the user.

Concepts Used:
- arrays
- loops (for / while)
- nested LCM logic
- modulus operator (%)
*/

#include <stdio.h>

// Function to find LCM of two numbers
int findLCM(int a, int b) {
    int max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}

int main() {
    int n, i;

    // Input number of elements
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Start LCM with first element
    int lcm = arr[0];

    // Combine LCM step by step
    for (i = 1; i < n; i++) {
        lcm = findLCM(lcm, arr[i]);
    }

    printf("LCM of given numbers is %d\n", lcm);

    return 0;
}
