#include <stdio.h>
void main()
{
    int series[] = {1, 2, 2, 4, 8, 32, 256, 8192, 2097152}; 
    int length = sizeof(series) / sizeof(series[0]); 

    printf("The series is:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", series[i]);
    }
    printf("\n");

}
