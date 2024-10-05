#include<stdio.h>
#include<math.h>

void main()
{
    int n,n2, count=0,count2=3, check;
    printf("enter number: ");
    scanf("%d",&n);
    n2=n;
    n=n/10;
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    if (count>0)
    {
        printf("the number isnt single digit");
        if (n2%2==0)
        {
            printf("\nnumber is composite");
        }
        else
        {
            int isPrime = 1;
            for (int i = 3; i <= sqrt(n2); i += 2) {
                if (n2 % i == 0) {
                    isPrime = 0; 
                    break;
                }
            }
            if (isPrime) {
                printf("\nNumber is prime.");
            } else {
                printf("\nNumber is composite.");
            }
        }
        
    }
    else
    {
        printf("the number is single digit");
        if (n2==3 || n2==2)
        {
            printf("\nnumber is prime");
        }
        else if (n2<1)
        {
            printf("\nnumber is composite");
        }
        else if (n2%2==0)
        {
            printf("\nnumber is composite");
        }
        else if (n2==1)
        {
            printf("\nnumber is neither prime nor composite");
        }
        else
        {
        int isPrime = 1;
        for (int i = 3; i <= sqrt(n2); i += 2) {
            if (n2 % i == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime) {
            printf("\nNumber is prime.");
        } else {
            printf("\nNumber is composite.");
        }
        }
    }
}