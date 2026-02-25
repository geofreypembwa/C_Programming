// C Program to Print Your Own Name using scanf and printf
#include <stdio.h>
int main() {
    char name[100];
    printf("Enter Your Name: ");
    scanf("%s", name); // Taking input from the user
    printf("Your Name: %s\n", name); // Printing your name to the screen
    return 0;
}
