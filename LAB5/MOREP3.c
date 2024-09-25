#include<stdio.h>
void main()
{
    char user,encypt, decrypt;
    printf("enter your letter to encrypt: ");
    scanf(" %c",&user);
    encypt=user^9;
    printf(" your encrypted character is: %c", encypt);
    printf("\ndo you want to decrypt y/n ?");
    scanf(" %c",&decrypt);
    if (decrypt=='y' || decrypt=='Y')
    {
        decrypt=encypt^9;
        printf("your decrypted character is: %c",decrypt);
    }


}