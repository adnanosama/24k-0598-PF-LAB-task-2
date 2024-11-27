#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>


struct TravelPackage {
    char packageName[50];
    char destination[50];
    int duration; 
    float cost;  
    int seatsAvailable;
};

void displayPackages(struct TravelPackage packages[], int size) {
    printf("\nAvailable Travel Packages:\n");
    for (int i = 0; i < size; i++) {
        printf("%d. %s - %s, %d days, $%.2f, Seats Available: %d\n",
               i + 1,
               packages[i].packageName,
               packages[i].destination,
               packages[i].duration,
               packages[i].cost,
               packages[i].seatsAvailable);
    }
}


void bookPackage(struct TravelPackage packages[], int size) {
    int choice, seats;

    printf("\nEnter the package number to book: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > size) {
        printf("Invalid package number!\n");
        return;
    }

    struct TravelPackage *selected = &packages[choice - 1];

    if (selected->seatsAvailable <= 0) {
        printf("Sorry, no seats are available for this package.\n");
        return;
    }

    printf("Enter the number of seats to book: ");
    scanf("%d", &seats);

    if (seats > 0 && seats <= selected->seatsAvailable) {
        selected->seatsAvailable -= seats;
        printf("Booking successful! %d seat(s) booked for %s.\n", seats, selected->packageName);
    } else {
        printf("Invalid number of seats. Only %d seats available.\n", selected->seatsAvailable);
    }
}

int main() {
    struct TravelPackage packages[] = {
        {"Beach Getaway", "Hawaii", 5, 1200.50, 10},
        {"Mountain Retreat", "Alps", 7, 1500.75, 5},
        {"City Explorer", "Paris", 3, 800.00, 8},
        {"Desert Safari", "Dubai", 4, 1000.00, 6}
    };

    int numPackages = sizeof(packages) / sizeof(packages[0]);
    int choice;

    while (1) {
        printf("\n1. View Packages\n");
        printf("2. Book a Package\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            displayPackages(packages, numPackages);
        } else if (choice == 2) {
            bookPackage(packages, numPackages);
        } else if (choice == 3) {
            printf("Exiting. Have a nice day!\n");
            break;
        } else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
