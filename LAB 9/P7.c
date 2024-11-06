#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int prime(int num);
int prime(int num)
{
    if (num<=1)
    {
        printf("enter number greater than 1");
        return 0;
    }
    else if (num==2)
    {
        printf("%d is prime", num);
        return 1;
    }
    else
    {
        for (int i = 2; i <=  sqrt(num) ; i++)
        {
            if (num%i==0)
            {
                printf("%d is not prime", num);
                return 0;
            }
         
        }
        printf("%d is prime",num);
        return 1;
    }
}
void main()
{
    int user;
    printf("enter number: ");
    scanf("%d",&user);
    prime(user);
}