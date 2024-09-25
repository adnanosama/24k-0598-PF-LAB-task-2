#include<stdio.h>
void main()
{
    int age;
    char country;
    printf("enter age: ");
    scanf("%d",&age);
    printf("enter country first letter: ");
    scanf(" %c",&country);
    if (age>20 && (country=='p' || country=='P'))
    {
        printf("eligible for voting");
    }
    else
    printf("not eleigible");
    }