#include<stdio.h>
void main()
{
    int num1, num2;
    printf("enter num 1: ");
    scanf("%d",&num1);
    printf("enter num 2: ");
    scanf("%d",&num2);
    num1=num1^num2;
    num2=num1^num2;
    num1=num1^num2;
    printf("number 1 is now %d ", num1);
    printf("\nnumber 2 is now %d ",num2);

}