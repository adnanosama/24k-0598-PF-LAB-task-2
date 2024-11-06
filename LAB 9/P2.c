#include<stdio.h>
#include<string.h>
int evenodd(int a);
int evenodd(int a)
{
    if (a%2==0)
    {
        printf("%d is even",a);
    }
    else
    {
        printf("%d is odd");
    }
}
void main()
{
    evenodd(34);
}
