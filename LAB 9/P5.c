#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char words[5][20];
    int pal=0;
    for (int i = 0; i < 5; i++)
    {
        printf("enter word %d: ",i+1);
        fgets(words[i],20,stdin);
        words[i][strcspn(words[i], "\n")] = '\0';

    }
    for (int i = 0; i < 5; i++)
    {
        int lenght=strlen(words[i]);
        pal=1;
        for (int j = 0; j < lenght/2; j++)
        {
            if (words[i][j]!=words[i][lenght-j-1])
            {
                pal=0;
                break;
            }
        }
        if (pal)
        {
            printf("%s is a palindrom\n", words[i]);
        }
        
        
    }
    
}