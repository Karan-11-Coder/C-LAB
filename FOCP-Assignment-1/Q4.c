#include <stdio.h>

//Programme to swap two numbers using four different method's

int main() {
    int num1,num2;
    printf("Enter first number :");
    scanf("%d",&num1);
    printf("Enter second number :");
    scanf("%d",&num2);

//First method
    printf("%d , %d after swapping values become %d , %d\n",num1,num2,num2,num1);

//Second method
    int num3;
    num3=num2;
    num2=num1;
    num1=num3;
    printf("Values after swapping %d , %d\n",num3,num2);

//Third method
    



}




