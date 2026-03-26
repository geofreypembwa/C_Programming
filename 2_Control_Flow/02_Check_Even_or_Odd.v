//Program to check a number is odd or even

#include <stdio.h>

int main() {
    int num;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // ==============================
    // Method 1: Using Modulo Operator
    // ==============================
    // If remainder when divided by 2 is 0 → Even, else Odd
    if (num % 2 == 0)
        printf("Modulo Method: Even\n");
    else
        printf("Modulo Method: Odd\n");

    // =====================================
    // Method 2: Using Bitwise AND Operator
    // =====================================
    // LSB (Least Significant Bit) decides parity:
    // 0 → Even, 1 → Odd
    if (num & 1)
        printf("Bitwise AND Method: Odd\n");
    else
        printf("Bitwise AND Method: Even\n");

    // =====================================
    // Method 3: Using Shift Operator Trick
    // =====================================
    // Remove LSB using right shift then left shift
    // If number changes → Odd, else Even
    int temp = num;
    temp = (temp >> 1) << 1;

    if (temp == num)
        printf("Shift Method: Even\n");
    else
        printf("Shift Method: Odd\n");

    return 0;
}
