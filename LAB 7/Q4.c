#include<stdio.h>
void main()
{
    int size=0;
    
    printf("enter array size: ");
    scanf("%d",&size);
    int arr[size];
    for (int i = 0; i <size; i++)
    {
        printf("element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int count[size]; 
    for(int i = 0; i < size; i++) {
        count[i] = 0;
    }
    
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;
    }
    printf("\\elements more than 1 are: ");
    for (int i = 0; i < size; i++)
    {
        if (count[i]>1)
        {
            printf("%d ", i);
        }
        
    }
    
}