#include<stdio.h>
void main()
{
     int num;
    printf("enter number: ");
    scanf("%d",&num);
    (num>0) ? printf("positive"): (num==0) ? printf("zero"):printf("negative"); 
    
}