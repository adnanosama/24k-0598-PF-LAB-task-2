#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void reverse(char string[100], char store[100]);
void reverse(char string[100],char store[100])
{
    int z=0;
    int lenght=strlen(string);
    for (int i = lenght-1; i >= 0; i--)
    {
        store[z]=string[i];
        z++;
    }
    printf("reversed string is: %s",store);
}
void main()
{
    char string[100], store[100];
    printf("enter the string: ");
    fgets(string,100,stdin);
    string[strcspn(string,"\n")]='\0';
    reverse(string,store);
}