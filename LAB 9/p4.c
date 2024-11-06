#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char test[3][20]={"no","testing","schedule"};
    char user[20];
    int check=0;
    printf("enter word to check: ");
    fgets(user,20,stdin);
    user[strcspn(user,"\n")]='\0';
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(test[i],user)==0)
        {
            check++;
            printf("Found");
            break;
        }
        
    }
    if (check==0)
    {
        printf("not found");
    }
    
    
}