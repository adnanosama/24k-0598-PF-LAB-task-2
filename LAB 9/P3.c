#include<stdio.h>
#include<string.h>
void main()
{
    char dest[20];
    char src[20];
    int num;
    printf("enter destination string: ");
    fgets(dest,20,stdin);
    dest[strcspn(dest,"\n")]='\0';
    strcat(dest," ");
    printf("enter source string: ");
    fgets(src,20,stdin);
    src[strcspn(src,"\n")]='\0';
    printf("enter number of characters: ");
    scanf("%d",&num);
    strncat(dest,src,num);
    printf("%s",dest);
}
