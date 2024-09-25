#include<stdio.h>
void main()
{
    int num1,num2;
    printf("enter number1: ");
    scanf("%d",&num1);
    printf("enter number2: ");
    scanf("%d",&num2);
    (num1>num2) ? printf("%d is greater",num1): printf("%d is greater",num2);
}