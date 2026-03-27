/*
Program: Print Alphabets A-Z and a-z using Loops
Description: This program demonstrates different ways to print alphabets
             using ASCII values and character variables.

Concepts Used:
- ASCII values
- for loop
- while loop
- do-while loop
- character data type
*/

#include <stdio.h>

int main() {

    char ch;

    // 🔹 Method 1: Using ASCII values with for loop
    printf("Alphabets using ASCII values:\n");

    for (int i = 65; i <= 90; i++) {
        printf("%c ", i);   // 65–90 = A–Z
    }

    printf("\n");

    for (int i = 97; i <= 122; i++) {
        printf("%c ", i);   // 97–122 = a–z
    }

    printf("\n\n");

    // 🔹 Method 2: Using character variable with for loop
    printf("Alphabets using character variable (for loop):\n");

    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", ch);
    }

    printf("\n");

    for (ch = 'a'; ch <= 'z'; ch++) {
        printf("%c ", ch);
    }

    printf("\n\n");

    // 🔹 Method 3: Using while loop
    printf("Alphabets using while loop:\n");

    ch = 'A';
    while (ch <= 'Z') {
        printf("%c ", ch);
        ch++;
    }

    printf("\n");

    ch = 'a';
    while (ch <= 'z') {
        printf("%c ", ch);
        ch++;
    }

    printf("\n\n");

    // 🔹 Method 4: Using do-while loop
    printf("Alphabets using do-while loop:\n");

    ch = 'A';
    do {
        printf("%c ", ch);
        ch++;
    } while (ch <= 'Z');

    printf("\n");

    ch = 'a';
    do {
        printf("%c ", ch);
        ch++;
    } while (ch <= 'z');

    printf("\n");

    return 0;
}
