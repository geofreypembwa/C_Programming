/*
Program: Reverse Floyd's Triangle
Description: Prints numbers in reverse order in triangular form.

Concepts Used:
- nested loops
- formula n(n+1)/2
- decrement operator
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Find maximum number
    int c = n * (n + 1) / 2;

    // Outer loop → rows (reverse)
    for (int i = n; i >= 1; i--) {

        // Inner loop → print numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", c);
            c--; // decrease number
        }

        printf("\n");
    }
//Character version 
  char ch = 'A' + (n * (n + 1) / 2) - 1;

for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
        printf("%c ", ch--);
    }
    printf("\n");
}
  
    return 0;
}
