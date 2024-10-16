#include<stdio.h>
void main()
{
    int Input[]= {4,1,6,8,10,21,8,9,2,6};
    float length;
    int max=-1, min=9999;
    length=sizeof(Input)/sizeof(Input[0]);
    for (int i = 0; i < length-1; i++)
    {
        if (Input[i]>max)
        {
            max=Input[i];
        }
        if (Input[i]<min)
        {
            min=Input[i];
        }
    }
    printf("max value is: %d",max);
    printf("\nmin value is: %d",min);
}