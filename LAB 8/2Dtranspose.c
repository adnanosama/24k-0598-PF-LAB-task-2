#include<stdio.h>
#include<math.h>
#include<string.h>
void main()
{
    int row=0, col=0;
    printf("enter rows: ");
    scanf("%d",&row);
    printf("enter colums: ");
    scanf("%d",&col);
    int matrix[row][col];
    int transpose[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("enter row %d and colum %d : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
            transpose[j][i]=matrix[i][j];
        }
        
    }
    printf("your matrix is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
        
    }
    printf("transpose of matrix is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
        
    }
    
    

    
}