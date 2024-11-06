#include <stdio.h>
#include <string.h>
int sum(int a, int b);
int sum(int a,int b)
{
    return a*b;
}
int main()
{
    printf("%d", sum(6,7));
}