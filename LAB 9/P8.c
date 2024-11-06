#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int simplecalc(float a, float b);
int simplecalc(float a , float b)
{
    char user;
    float final;
    printf("what operator you want to use: ");
    scanf(" %c",&user);
    switch (user)
    {
    case '/':
        final=a/b;
        if (b==0)
        {
            printf("cant divide by 0\n");
            break;
        }
        
        printf("division between %.0f and %.0f is: %.1f \n",a,b,final);
        break;
    case '+':
        final=a+b;
        printf("addition between %.0f and %.0f is: %.1f \n",a,b,final);
        break;
    case '-':
        final=a-b;
        printf("addition between %.0f and %.0f is: %.1f \n",a,b,final);
        break;
    case '*':
        final=a*b;
        printf("addition between %.0f and %.0f is: %.1f \n",a,b,final);
        break;
    default:
        printf("invalid operation");
        break;
    }

}
void main()
{
    float num1,num2;
    printf("enter number 1: ");
    scanf("%f",&num1);
    printf("enter number 1: ");
    scanf("%f",&num2);
    simplecalc(num1,num2);
}