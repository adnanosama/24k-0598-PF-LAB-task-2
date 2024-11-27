#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

void recursivearray(int array[],int size){
    if (size == 0) {
        return;
    }
    printf("%d\n", array[0]);
    recursivearray(array+1,size-1);
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Array elements are:\n");
    recursivearray(array, size);

    return 0;
}