#include<stdio.h>
#include<string.h>
void main()
{
    int range=0, prime=-1;
    do
    {
            
    printf("enter the range for prime number: ");
    scanf("%d",&range);
    } while (range<2);
    if (range==2)
    {
           printf("%d is prime\n",range);
    }
    

    for (int i = 2; i < (int)range^(1/2); i++)
    {
       for (int j = 2; j <=i; j++)
       {
        if (i==j || i%j!=0)
        {
            prime=1;
        }
        else
        {
            prime=0;
            break;
        }
       }
        if (prime==1)
        {
            printf("%d is prime\n",i);
        }
    
    }
}