/// The programme print the intager between the numbers enter by user
#include<stdio.h>
int main(){
    int num1, num2; //declaration of variables to store the interval
    printf("\nEnter the two numbers (separate them by space):\n");
    scanf("%d %d",&num1,&num2);//taking the two intervals
    for(int i=num1;i<num2;i++){
        printf("%d, ",i+1);
    }
    return 0;
}
