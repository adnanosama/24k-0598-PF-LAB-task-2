#include<stdio.h>
void main()
{
    int year;
    printf("enter year: ");
    scanf("%d",&year);
    if ((year%4==0 && year%100!=0) || year%400==0)
    {
        printf("its a leap year");
    
    }
    else
    printf("its not a leap year");
}