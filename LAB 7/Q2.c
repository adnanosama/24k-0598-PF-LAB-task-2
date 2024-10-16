#include<stdio.h>
void main()
{
    int number[]={1,2,3,4,5,6,7,8,9};
    float length;
    length=sizeof(number)/sizeof(number[0]);
    for(int i=length-1; i>=0; i--)
        printf("%d ", number[i]);
}