#include<stdio.h>
void main()
{
    int input,total=0;
    printf("enter value to add: ");
    scanf("%d",&input);   
    while (input!=0)
    {
        total += input;
        printf("enter value to add: ");
        scanf("%d",&input);   
    }
    printf("your total is: %d",total);
}