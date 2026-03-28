/*
Program: Menu Driven Pattern Generator
Description: This program prints different pyramid patterns based on user choice.

Concepts Used:
- switch-case
- nested loops
- pattern logic (spaces & symbols)
*/

#include <stdio.h>

// 🔸 Right Half Pyramid
void rightHalf(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}

// 🔸 Left Half Pyramid
void leftHalf(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf("  ");
        for (int k = 1; k <= i; k++)
            printf("* ");
        printf("\n");
    }
}

// 🔸 Full Pyramid
void fullPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++)
            printf("*");
        printf("\n");
    }
}

// 🔸 Inverted Full Pyramid
void invertedFull(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++)
            printf("*");
        printf("\n");
    }
}

// 🔸 Diamond Pattern
void diamond(int n) {
    // upper
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++)
            printf("*");
        printf("\n");
    }
    // lower
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++)
            printf("*");
        printf("\n");
    }
}

// 🔸 Hollow Pyramid
void hollowPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1) || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// 🔸 Hollow Inverted Pyramid
void hollowInverted(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 1 || k == (2 * i - 1) || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// 🔸 Inverted Pyramid (simple)
void invertedHalf(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}

int main() {
    int choice, n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    do {
        printf("\n===== Pattern Menu =====\n");
        printf("1. Right Half Pyramid\n");
        printf("2. Left Half Pyramid\n");
        printf("3. Full Pyramid\n");
        printf("4. Inverted Full Pyramid\n");
        printf("5. Diamond Pattern\n");
        printf("6. Hollow Pyramid\n");
        printf("7. Hollow Inverted Pyramid\n");
        printf("8. Inverted Half Pyramid\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("\n");

        switch (choice) {
            case 1: rightHalf(n); break;
            case 2: leftHalf(n); break;
            case 3: fullPyramid(n); break;
            case 4: invertedFull(n); break;
            case 5: diamond(n); break;
            case 6: hollowPyramid(n); break;
            case 7: hollowInverted(n); break;
            case 8: invertedHalf(n); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 0);

    return 0;
}
