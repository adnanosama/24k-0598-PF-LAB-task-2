#include <stdio.h>

void main()
{
char given;
printf("Enter a character: ");
scanf(" %c",&given);
if (given>=65&&given<=90 )
printf("This is a uppercase letter");
else if(given>=97 && given<=122 )
printf("This is a lowercase letter");
else if (given>=48&&given<=57 )
printf("This is a digit");
else if (given>=0&&given<=47 || given>=58&&given<=64 || given>=91&&given<=96 || given>=124&&given<=127)
printf("This is a special character");
}