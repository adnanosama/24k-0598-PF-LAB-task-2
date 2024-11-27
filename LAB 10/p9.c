#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

void bubbleSort(int array[], int n) {
    
    if (n == 1) {
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        if (array[i] > array[i + 1]) {

            int temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
        }
    }
    bubbleSort(array, n - 1);
}


void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {56,7,34,6,12,56,98};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Unsorted array: \n");
    printArray(array, n);

    bubbleSort(array, n);

    printf("Sorted array: \n");
    printArray(array, n);

    return 0;
}