#include<stdio.h>
#include<string.h>
void main()
{
    int smallestr=0, store=0,largestc=-1, saddle=0;
    int matrix[3][3]={{6,4,7},{7,3,9},{11,9,10}};
    for (int i = 0; i < 3; i++)
    {
        smallestr=matrix[i][0];
        store=0;
        largestc=1;
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j]<smallestr)
            {
                smallestr=matrix[i][j];
                store=j;
            }

            
        }
        for (int x = 0; x < 3; x++)
        {
            if (matrix[x][store]>smallestr)
            {
                largestc=0;
                break; 
            }
            
        }
        if (largestc==1)
        {
            printf("%d is saddle at row: %d and colum: %d\n",smallestr,i+1,store+1);
            saddle=1;
            break;
        }
      
      

    }
    if (saddle!=1)
      {
        printf("no saddle found");
      }
}