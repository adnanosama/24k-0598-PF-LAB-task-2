#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

#define max 35 


void compare(int temp) {
   
    static int count = 0;
    
    if (temp > max) {
        count++;  
        printf("Temperature %.2f°C exceeds the limit!\n", (float)temp);
    } else {
        printf("Temperature %.2f°C is within the safe limit.\n", (float)temp);
    }

    printf("Temperatures exceeded the limit %d times.\n", count);
}

int main() {
    int temp;


    while (1) {
        printf("Enter the temp in Celsius (or -999 to stop): ");
        scanf("%d", &temp);

        if (temp == -999) {
            break;  
        }
        compare(temp);
    }

    printf("Exiting program.\n");
    return 0;
}