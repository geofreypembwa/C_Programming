//Program to Check Vowel or Consonant

#include <stdio.h>
#include <ctype.h>   // for isalpha()

int main() {
    char ch;

    // Input character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if it is a letter
    if (isalpha(ch)) {

        // Check vowels
        if (ch == 'a' || ch == 'A' ||
            ch == 'e' || ch == 'E' ||
            ch == 'i' || ch == 'I' ||
            ch == 'o' || ch == 'O' ||
            ch == 'u' || ch == 'U') {

            printf("%c is a Vowel\n", ch);
        }
        else {
            printf("%c is a Consonant\n", ch);
        }

    } else {
        printf("%c is not an alphabet\n", ch);
    }

    return 0;
}

//Using string search function 
#include <stdio.h>
#include <string.h>

int main() {
    char ch;
    char vowels[] = "aeiouAEIOU";

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // string search
    if (strchr(vowels, ch)) {
        printf("%c is a Vowel\n", ch);
    } else {
        printf("%c is a Consonant\n", ch);
    }

    return 0;
}
