#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void maxmin(int array[], int lenght);
void maxmin(int array[], int lenght)
{
    int min=array[0];
    int max=array[0];
    for (int i = 0; i < lenght ; i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
        if (array[i]<min)
        {
            min=array[i];
        }
        
    }
    printf("max is: %d\n",max);
    printf("min is: %d\n",min);
    
}
void main()
{
    int num;
    printf("how many integers you want to insert?: ");
    scanf("%d", &num);
    int integers[num];
    for (int i = 0; i < num; i++)
    {
        printf("enter number %d: ",i+1);
        scanf("%d",&integers[i]);
    }
    maxmin(integers,num);
    

}