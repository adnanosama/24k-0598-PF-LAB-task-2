#include<stdio.h>
#include<string.h>
void main()
{
    int start=0, increase=1, x=0;
    printf("enter the number: ");
    scanf("%d",&start);
    if (start%2==0)
    {
        start-=1;
    }
    x=start;
    for (int i = start; i >=increase; i-=2)
    {
        for (int j = 1; j <= increase; j++)
        {
            if(x>0)
            {
                printf("%d ",x);
                x-=2;
            }
        }
        printf("\n");
        increase++;
    }
    
}