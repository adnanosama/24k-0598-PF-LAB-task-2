#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>


#define METERS_TO_KILOMETERS 0.001


void convertToKilometers(float meters) {

    static int callCount = 0;
    callCount++;

 
    float kilometers = meters * METERS_TO_KILOMETERS;
    printf("Conversion: %.2f meters = %.2f kilometers\n", meters, kilometers);
    printf("This function has been called %d times.\n", callCount);
}

int main() {
    float meters;

    printf("Enter a distance in meters (0 to exit): ");
    while (1) {
        scanf("%f", &meters);

        if (meters == 0) {
            printf("Exiting the program.\n");
            break;
        }

        convertToKilometers(meters);
        printf("Enter another distance in meters (0 to exit): ");
    }

    return 0;
}
