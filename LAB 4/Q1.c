#include<stdio.h>
void main()
{
    int num, check;
    printf("enter number: ");
    scanf("%d", &num);
    check=num%3;
    if (check != 0)
    printf("it is not a multiple of 3");
    else
        printf("it is a multiple of 3");
    



}