#include<stdio.h>
void main()
{
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    if (age>0)
    {
        if (age<=12)
     {
        printf("its a child");
     }
        else if (age>12 && age<=20)
     {
        printf("teenager");
     }
        else if (age>20)
     {
        printf("adult");
     }
    }
    else
    {
        printf("input right age");
    }
    
    
    
    
    
}