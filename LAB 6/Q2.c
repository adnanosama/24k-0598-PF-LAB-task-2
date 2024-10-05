#include <stdio.h>

void main()
{
    int n, count=0;
    printf("enter number: ");
    scanf("%d",&n);
    n=n/10;
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    if (count>0)
    {
        printf("the number isnt single digit");
    }
    else
        printf("the number is single didgit");
    
}