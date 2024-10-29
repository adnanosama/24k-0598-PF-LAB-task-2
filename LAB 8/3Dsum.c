#include<stdio.h>
void main()
{
    int matrix[2][3][3]={{{1,4,5},{3,6,4},{5,7,2}},{{4,6,1},{8,1,4},{3,5,3}}};
    int sum=0;
    for (int i = 0; i < 2; i++)
    {
        sum=0;
        printf("sum of page %d:\n",i+1);
        for (int j = 0; j < 3; j++)
        {
            for (int x = 0; x < 3; x++)
            {
                sum+=matrix[i][j][x];
            }
            
        }
        printf("%d\n",sum);

        
    }
    
}