// Program to calculate area and perimeter of different geometric figures

#include <stdio.h>

int main() {
    int choice;
    float a, b, c, d, h, r;
    float area, perimeter;

    // Menu
    printf("Geometric Figures:\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Square\n");
    printf("4. Triangle\n");
    printf("5. Parallelogram\n");
    printf("6. Trapezium\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    switch (choice) {

        case 1: // Rectangle
            printf("Enter length and width: ");
            scanf("%f %f", &a, &b);

            area = a * b;
            perimeter = 2 * (a + b);

            printf("Area = %.2f\n", area);
            printf("Perimeter = %.2f\n", perimeter);
            break;

        case 2: // Circle
            printf("Enter radius: ");
            scanf("%f", &r);

            area = 3.1416 * r * r;
            perimeter = 2 * 3.1416 * r;

            printf("Area = %.2f\n", area);
            printf("Circumference = %.2f\n", perimeter);
            break;

        case 3: // Square
            printf("Enter side: ");
            scanf("%f", &a);

            area = a * a;
            perimeter = 4 * a;

            printf("Area = %.2f\n", area);
            printf("Perimeter = %.2f\n", perimeter);
            break;

        case 4:// Right-angled triangle
            printf("Enter base, height and hypotenuse: ");
            scanf("%f %f %f", &a, &b, &c);

            area = 0.5 * a * b;
            perimeter = a + b + c;

            printf("Area = %.2f\n", area);
            printf("Perimeter = %.2f\n", perimeter);
            break;
            
        case 5: // Parallelogram
            printf("Enter base and height: ");
            scanf("%f %f", &a, &h);

            printf("Enter side length: ");
            scanf("%f", &b);

            area = a * h;
            perimeter = 2 * (a + b);

            printf("Area = %.2f\n", area);
            printf("Perimeter = %.2f\n", perimeter);
            break;

        case 6: // Trapezium
            printf("Enter two parallel sides: ");
            scanf("%f %f", &a, &b);

            printf("Enter height: ");
            scanf("%f", &h);

            printf("Enter other two sides: ");
            scanf("%f %f", &c, &d);

            area = 0.5 * (a + b) * h;
            perimeter = a + b + c + d;

            printf("Area = %.2f\n", area);
            printf("Perimeter = %.2f\n", perimeter);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
