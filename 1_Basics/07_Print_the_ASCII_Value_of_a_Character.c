// C program to print the ASCII value of a character

#include <stdio.h>

int main() {
    char chr;

    // Prompt user to enter a character
    printf("Enter a character: ");
    scanf("%c", &chr);

    // Using implicit conversion (format specifier %d converts char to int)
    printf("The ASCII value of '%c' is %d\n", chr, chr);

    // Using explicit typecasting
    int asciiValue = (int)chr;
    printf("ASCII value of '%c' using typecasting is %d\n", chr, asciiValue);

    return 0;
}