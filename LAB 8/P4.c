#include<stdio.h>
#include<string.h>
void main()
{
    int matrix[3][3]={{2,4,6},{7,43,67},{1,8,5}};
    int matrix2[3][3]={{2,4,6},{7,43,67},{1,8,5}};
    int result[3][3]={0};
    int answer=0;
    for(int x=0; x<3; x++)
    {
        for (int i = 0; i < 3; i++)
        {
            answer=0;
            for (int j = 0; j < 3; j++)
            {
                answer+=matrix[x][j]*matrix2[j][i];
            }
            result[x][i]=answer;
            
        }
    }
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}
