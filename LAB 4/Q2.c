#include<stdio.h>
void main()
{
    char operator;
    int num1 , num2, sol ;
    printf("enter your first number: ");
    scanf("%d", &num1);
    printf("enter your second number: ");
    scanf("%d", &num2);
    printf("enter operator: ");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+' :
        sol=num1 + num2;
        printf("answer= %d", sol);
        break;
    case '-':
        sol=num1-num2;
        printf("answer= %d", sol);
        break;
    case '/':
        sol=num1/num2;
        printf("answer= %d", sol);
        break;
    case '*':
        sol=num1-num2;
        printf("answer= %d", sol);
        break;
    default:
        printf("insert correct options for gods sake");
        break;
    }
}