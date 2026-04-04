/*A program that calculates Average grade,Maximum grade,
Minimum grade,Letter grade (A–F) and Pass/Fail status*/
#include <stdio.h>

char getGrade(double avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

int main() {
    int count;
    double grade, sum = 0, max, min;

    printf("Enter number of grades: ");
    scanf("%d", &count);

    if (count < 1) {
        printf("Invalid input!\n");
        return 1;
    }

    // Taking inputs
   for (int i = 1; i <= count; i++) {
    printf("Enter marks of grade %d: ", i);
    scanf("%lf", &grade);

    if (grade < 0 || grade > 100) {
        printf("Invalid grade!\n");
        return 1;
    }

    sum += grade;

    if (i == 1) {
        max = min = grade; // initialize here
    } else {
        if (grade > max) max = grade;
        if (grade < min) min = grade;
    }
   }

    double avg = sum / count;
    char finalGrade = getGrade(avg);

    printf("\nMaximum: %.2f\nMinimum: %.2f\n", max, min);
    printf("Average: %.2f\n", avg);
    printf("Grade: %c\n", finalGrade);

    if (finalGrade == 'F')
        printf("Fail\n");
    else
        printf("Pass\n");

    return 0;
}
