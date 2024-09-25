#include<stdio.h>
void main()
{
        int assignment, exam, attendance, total;
    char grade;
    printf("enter your assignement marks: ");
    scanf("%d",&assignment);
    printf("enter your exam marks: ");
    scanf("%d",&exam);
    printf("enter your attendecance percentage: ");
    scanf("%d",&attendance);
    total=(assignment+exam+attendance)/3;
    if (total<50)
    {
        grade='U';
    }
    else if (total>50 && total<80)
        {
            grade='C';
        }
    else if (total>80 && total<90)
    {
        grade='B';
    }
    else
        grade='A';
    printf("your grade is: %c",grade);
}