#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int linearSearch(int array[], int size, int target, int index) {

    if (index >= size) {
        return -1;
    }


    if (array[index] == target) {
        return index; 
    }

    return linearSearch(array, size, target, index + 1);
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);
    int target;

    printf("Enter the element to search for: ");
    scanf("%d", &target);

    int result = linearSearch(array, size, target, 0);

    if (result != -1) {
        printf("Element %d found at index %d.\n", target, result+1);
    } else {
        printf("Element %d not found in the array.\n", target);
    }
    getchar(); 
    getchar(); 
    return 0;
}
