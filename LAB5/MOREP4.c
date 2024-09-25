#include<stdio.h>
void main()
{
    int age, income, CS;
    printf("enter age: ");
    scanf("%d",&age);
    printf("\nenter income: ");
    scanf("%d",&income);
    printf("\nenter credit score: ");
    scanf("%d",&CS);
if (age>18 && income>20000 && CS>200)
{
    printf("eligible to take loan");
}
else
printf("not eleigible");

}