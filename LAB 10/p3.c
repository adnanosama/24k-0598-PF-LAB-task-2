
#include <stdio.h>

struct flight {
        int flightnumber;
        char date[10];
        int seats;
        char depcity[10];
        char destcity[10];
};
int bookseat(struct flight *myFlight) {
    if (myFlight->seats == 0) {
        printf("Sorry, flight booked.\n");
    } else {
        myFlight->seats--;
        printf("Seat booked!\n");
    }
}
int printflight(struct flight myFlight) {
    printf("Departure City is %s\n", myFlight.depcity);
    printf("Destination is %s\n", myFlight.destcity);
    printf("Flight Number is %d\n", myFlight.flightnumber);
    printf("Flight date is %s\n", myFlight.date);
    printf("Remaining seats are %d\n", myFlight.seats);
}
void main() {
    struct flight myFlight = {708,"12-01-2025",23,"Riyadh","Karachi"};
    bookseat(&myFlight);
    printflight(myFlight);
}

