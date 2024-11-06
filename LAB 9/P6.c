#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swapintegers(int a, int b);
void swapintegers(int a, int b)
{
    int temp=0;
    temp=b;
    b=a;
    a=temp;
    printf("now the first one is %d\n", a);
    printf("now the second one is %d\n", b);
}
void main()
{
int a, b;
printf("enter first number: ");
scanf("%d",&a);
printf("enter second number: ");
scanf("%d",&b);
swapintegers(a,b);
}