#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>


// Define the structure for car details
struct Car {
    char make[50];
    char model[50];
    int year;
    double price;
    int mileage;
};

#define MAX_CARS 100
struct Car cars[MAX_CARS];
int carCount = 0;

void addCar() {
    if (carCount >= MAX_CARS) {
        printf("Dealership is full. Cannot add more cars.\n");
        return;
    }

    printf("Enter car maker: ");
    scanf(" %[^\n]", cars[carCount].make);

    printf("Enter car model: ");
    scanf(" %[^\n]", cars[carCount].model);

    printf("Enter car year: ");
    scanf("%d", &cars[carCount].year);

    printf("Enter car price: ");
    scanf("%lf", &cars[carCount].price);

    printf("Enter car mileage: ");
    scanf("%d", &cars[carCount].mileage);

    carCount++;
    printf("Car added successfully!\n");
}

void displayCars() {
    if (carCount == 0) {
        printf("No cars available in the dealership.\n");
        return;
    }

    printf("\nAvailable Cars:\n");

    for (int i = 0; i < carCount; i++) {
        printf("Car %d:\n", i + 1);
        printf("  Make: %s\n", cars[i].make);
        printf("  Model: %s\n", cars[i].model);
        printf("  Year: %d\n", cars[i].year);
        printf("  Price: $%.2f\n", cars[i].price);
        printf("  Mileage: %d km\n", cars[i].mileage);

    }
}


void searchCar() {
    char searchKey[50];
    printf("Enter make or model to search: ");
    scanf(" %[^\n]", searchKey);

    int found = 0;
    printf("\nSearch Results:\n");

    for (int i = 0; i < carCount; i++) {
        if (strstr(cars[i].make, searchKey) != NULL || strstr(cars[i].model, searchKey) != NULL) {
            printf("Car %d:\n", i + 1);
            printf("  Make: %s\n", cars[i].make);
            printf("  Model: %s\n", cars[i].model);
            printf("  Year: %d\n", cars[i].year);
            printf("  Price: $%.2f\n", cars[i].price);
            printf("  Mileage: %d km\n", cars[i].mileage);

            found = 1;
        }
    }

    if (!found) {
        printf("No cars found matching '%s'.\n", searchKey);
    }
}

int main() {
    int choice;
    do {
        printf("\nCar Dealership Management System\n");
        printf("1. Add a New Car\n");
        printf("2. Display Available Cars\n");
        printf("3. Search Cars by Make or Model\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addCar();
                break;
            case 2:
                displayCars();
                break;
            case 3:
                searchCar();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
