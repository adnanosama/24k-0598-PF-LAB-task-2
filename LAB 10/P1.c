
#include <stdio.h>

void main() {
    int num = 12345, value;
    value = recursive(num);
    printf("%d", value);
}

int recursive(num) {
    if (num == 0) {
        return 0;
    } else {
        return (num % 10) + recursive(num / 10);
    }
}