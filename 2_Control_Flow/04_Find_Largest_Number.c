// Program that find the largest number in a numbers enter by the user 
#include <stdio.h>

int main() {
    int n, i, num, max;

    // Ask user how many numbers they want to enter
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    // Check if user entered a valid count
    if (n <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1; // Exit program
    }

    // Take the first number as initial maximum
    printf("Enter number 1: ");
    scanf("%d", &max);

    // Loop for remaining numbers
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Compare current number with max
        if (num > max) {
            max = num;  // Update max if a larger number is found
        }
    }

    // Final result
    printf("The largest number is: %d\n", max);

    return 0;
}
