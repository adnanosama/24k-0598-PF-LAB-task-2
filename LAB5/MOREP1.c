#include<stdio.h>
void main()
{
    int num1, num2, num3;
    printf("enter 3 numbers:\n");
    scanf("%d",&num1);
    scanf("\n%d",&num2);
    scanf("\n%d",&num3);
    if (num1>num2)
    {
        if (num1>num3)
        {
            printf("%d is the greatest",num1);
        }
        else
        printf("%d is the greatest",num3);
    }
    else if (num2>num3)
    {
        printf("%d is the greatest",num2);
    }
    else
    printf("%d is the greatest",num3);
}