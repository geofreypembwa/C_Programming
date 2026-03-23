#include<stdio.h>

int main() {
    int num1, num2, sum;

    printf("Enter the two numbers to add (Separate them by space):\n");
    scanf("%d%d",&num1,&num2);

    // 1. Using +
    sum = num1 + num2;
    printf("Using + : %d\n\n", sum);

    // 2. Using ++ and --
    int temp = num2;
    sum = num1;

    while(temp != 0){
        if(temp > 0){
            sum++;
            temp--;
        } else {
            sum--;
            temp++;
        }
    }
    printf("Using ++/-- : %d\n\n", sum);

    // 3. Using bitwise operators
    int a = num1, b = num2;

    while(b != 0){
        int carry = (a & b) << 1;
        a = a ^ b;
        b = carry;
    }

    sum = a;
    printf("Using bitwise : %d\n\n", sum);

    return 0;
}