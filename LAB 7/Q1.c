#include<stdio.h>
void main()
{
    int input[]={1,2,3,4,5,6,7,8,9};
    int sum=0;
    for(int i=0; i<9; i++)
    {
        sum += input[i];
    }
    printf("the sum is: %d",sum);
}
