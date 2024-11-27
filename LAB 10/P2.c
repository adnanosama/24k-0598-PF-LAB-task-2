
#include <stdio.h>
#include <string.h>

void reverse_string(char str[], int start, int end) {
    if (start >= end) {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverse_string(str, start + 1, end - 1);
}

int main() {
    char str[20];
    printf("enter string: ");
    fgets(str,20,stdin);
    str[strcspn(str,"\n")]='\0';
    int n = strlen(str);
    reverse_string(str, 0, n - 1);

    printf("Reversed string is: %s\n", str);
    return 0;
}