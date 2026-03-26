#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char ch;

    // Input character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if it's a letter first
    if (!isalpha(ch)) {
        printf("%c is not an alphabet\n", ch);
        return 0;
    }

    printf("\n--- Method 1: Using if-else ---\n");

    // METHOD 1: Manual checking
    if (ch == 'a' || ch == 'A' ||
        ch == 'e' || ch == 'E' ||
        ch == 'i' || ch == 'I' ||
        ch == 'o' || ch == 'O' ||
        ch == 'u' || ch == 'U') {
        printf("%c is a Vowel\n", ch);
    } else {
        printf("%c is a Consonant\n", ch);
    }

    printf("\n--- Method 2: Using strchr() ---\n");

    // METHOD 2: Using string search
    char vowels[] = "aeiouAEIOU";

    if (strchr(vowels, ch)) {
        printf("%c is a Vowel\n", ch);
    } else {
        printf("%c is a Consonant\n", ch);
    }

    return 0;
}
