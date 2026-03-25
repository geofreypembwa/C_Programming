// Program to swap two numbers using different methods (with user input)

#include <stdio.h>

int main() {
    int a, b;

    // Taking user input
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nOriginal values:\n");
    printf("a = %d, b = %d\n\n", a, b);

    // -------------------------------
    // Method 1: Using temporary variable
    // -------------------------------
    int temp = a;
    int temp_a1 = a;
    int temp_b1 = b;

    temp = temp_a1;
    temp_a1 = temp_b1;
    temp_b1 = temp;

    printf("Using temporary variable:\n");
    printf("a = %d, b = %d\n\n", temp_a1, temp_b1);

    // -------------------------------
    // Method 2: Using arithmetic operations
    // -------------------------------
    int temp_a2 = a;
    int temp_b2 = b;

    temp_a2 = temp_a2 + temp_b2;
    temp_b2 = temp_a2 - temp_b2;
    temp_a2 = temp_a2 - temp_b2;

    printf("Using arithmetic operations:\n");
    printf("a = %d, b = %d\n\n", temp_a2, temp_b2);

    // -------------------------------
    // Method 3: Using XOR operator
    // -------------------------------
    int temp_a3 = a;
    int temp_b3 = b;

    temp_a3 = temp_a3 ^ temp_b3;
    temp_b3 = temp_a3 ^ temp_b3;
    temp_a3 = temp_a3 ^ temp_b3;

    printf("Using XOR operator:\n");
    printf("a = %d, b = %d\n", temp_a3, temp_b3);

    return 0;
}
