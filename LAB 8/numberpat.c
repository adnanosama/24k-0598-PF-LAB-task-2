#include<stdio.h>
#include<string.h>
void main()
{
    int count=0;
    for (int i = 0; i < 5; i++)
    {
        count=0;
        for (int j = 0; j < i; j++)
        {
            count++;
            printf("%d ",count);
        }
        printf("\n");
        
    }
    
}