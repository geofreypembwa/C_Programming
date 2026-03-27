/*
Program: Multiplication Table in C
Method: Using loop (without array)

Concepts Used:
- for loop
- Function usage
- Arithmetic operations
- User input
*/

#include <stdio.h>

// Function to print multiplication table
void print_table(int num, int range) {
    int i, result;

    printf("\nMultiplication Table of %d:\n\n", num);

    // Loop from 1 to given range
    for (i = 1; i <= range; i++) {
        result = num * i;

        // Print each line of table
        printf("%d * %d = %d\n", num, i, result);
    }
}

int main() {
    int num, range;

    // Taking input from user
    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter range: ");
    scanf("%d", &range);

    // Function call
    print_table(num, range);

    return 0;
}
