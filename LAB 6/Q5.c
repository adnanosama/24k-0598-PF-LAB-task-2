#include <stdio.h>

int main() {
    int numbers[] = {55536, 37268, 26922, 2738, 546, 91, -3, -9, -9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}