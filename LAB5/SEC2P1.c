#include<stdio.h>
void main()
{
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    if (num%3==0 && num%5==0)
    {
        printf("it is divisible by both 3 and 5");
    }
    else
    printf("not divisible by both");
}