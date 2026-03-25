// Program to convert temperature between Fahrenheit and Celsius

#include <stdio.h>

int main() {
    int choice;
    float temp, result;

    // Display menu
    printf("Temperature Conversion Menu:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");

    // Take user choice
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Fahrenheit to Celsius
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);

            result = (temp - 32.0) * 5.0 / 9.0;

            printf("Temperature in Celsius: %.2f\n", result);
            break;

        case 2:
            // Celsius to Fahrenheit
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);

            result = (temp * 9.0 / 5.0) + 32.0;

            printf("Temperature in Fahrenheit: %.2f\n", result);
            break;

        default:
            printf("Invalid choice! Please select 1 or 2.\n");
    }

    return 0;
}
