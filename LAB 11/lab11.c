#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PLAYERS 5

// Structures
struct player {
    char name[20];
    char team[20];
};

struct bowl {
    char type[10]; // seamer, pacer, spinner
    char arm[5];   // left or right
    struct player ply;
};

struct bat {
    char type[10]; // top order, middle order, lower order
    char handed[8]; // lefty or righty
    struct bowl ply2;
};

// Function Prototypes
void createPlayers();
void readPlayers();
void updatePlayer();
void deletePlayer();

int main() {
    int choice;
    while (1) {
        printf("\n--- Player Management System ---\n");
        printf("1. Create Players\n");
        printf("2. View Players\n");
        printf("3. Update Player\n");
        printf("4. Delete Player\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createPlayers();
                break;
            case 2:
                readPlayers();
                break;
            case 3:
                updatePlayer();
                break;
            case 4:
                deletePlayer();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// Create Players
void createPlayers() {
    FILE *fp = fopen("players.txt", "a+"); // Append mode
    if (!fp) {
        printf("Error opening file.\n");
        return;
    }

    int n;
    printf("Enter the number of players to add (max %d): ", MAX_PLAYERS);
    scanf("%d", &n);

    if (n > MAX_PLAYERS) {
        printf("Maximum number of players is %d.\n", MAX_PLAYERS);
        fclose(fp);
        return;
    }

    for (int i = 0; i < n; i++) {
        struct bat playerData;

        printf("Enter player %d details:\n", i + 1);
        printf("Name: ");
        scanf("%s", playerData.ply2.ply.name);
        printf("Team: ");
        scanf("%s", playerData.ply2.ply.team);
        printf("Bowler type (seamer, pacer, spinner, N/A): ");
        scanf("%s", playerData.ply2.type);
        printf("Bowling arm (left, right, N/A): ");
        scanf("%s", playerData.ply2.arm);
        printf("Batsman type (top order, middle order, lower order, N/A): ");
        scanf("%s", playerData.type);
        printf("Batsman handed (lefty, righty, N/A): ");
        scanf("%s", playerData.handed);

        fwrite(&playerData, sizeof(struct bat), 1, fp);
    }

    printf("Players added successfully.\n");
    fclose(fp);
}

// Read Players
void readPlayers() {
    FILE *fp = fopen("players.txt", "r");
    if (!fp) {
        printf("Error opening file.\n");
        return;
    }

    struct bat playerData;
    printf("\n--- Players List ---\n");
    while (fread(&playerData, sizeof(struct bat), 1, fp)) {
        printf("\nName: %s\n", playerData.ply2.ply.name);
        printf("Team: %s\n", playerData.ply2.ply.team);
        printf("Bowler Type: %s\n", playerData.ply2.type);
        printf("Bowling Arm: %s\n", playerData.ply2.arm);
        printf("Batsman Type: %s\n", playerData.type);
        printf("Batsman Handed: %s\n", playerData.handed);
    }

    fclose(fp);
}


void updatePlayer() {
    FILE *fp = fopen("players.txt", "r+");
    if (!fp) {
        printf("Error opening file.\n");
        return;
    }

    char name[20];
    printf("Enter the name of the player to update: ");
    scanf("%s", name);

    struct bat playerData;
    int found = 0;
    long pos;

    while (fread(&playerData, sizeof(struct bat), 1, fp)) {
        if (strcmp(playerData.ply2.ply.name, name) == 0) {
            found = 1;
            pos = ftell(fp) - sizeof(struct bat);

            printf("Enter new details for %s:\n", name);
            printf("Name: ");
            scanf("%s", playerData.ply2.ply.name);
            printf("Team: ");
            scanf("%s", playerData.ply2.ply.team);
            printf("Bowler type (seamer, pacer, spinner, N/A): ");
            scanf("%s", playerData.ply2.type);
            printf("Bowling arm (left, right, N/A): ");
            scanf("%s", playerData.ply2.arm);
            printf("Batsman type (top order, middle order, lower order, N/A): ");
            scanf("%s", playerData.type);
            printf("Batsman handed (lefty, righty, N/A): ");
            scanf("%s", playerData.handed);

            fseek(fp, pos, SEEK_SET);
            fwrite(&playerData, sizeof(struct bat), 1, fp);
            printf("Player updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Player not found.\n");
    }

    fclose(fp);
}


void deletePlayer() {
    FILE *fp = fopen("players.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    if (!fp || !temp) {
        printf("Error opening file.\n");
        return;
    }

    char name[20];
    printf("Enter the name of the player to delete: ");
    scanf("%s", name);

    struct bat playerData;
    int found = 0;

    while (fread(&playerData, sizeof(struct bat), 1, fp)) {
        if (strcmp(playerData.ply2.ply.name, name) != 0) {
            fwrite(&playerData, sizeof(struct bat), 1, temp);
        } else {
            found = 1;
        }
    }

    fclose(fp);
    fclose(temp);

    remove("players.txt");
    rename("temp.txt", "players.txt");

    if (found) {
        printf("Player deleted successfully.\n");
    } else {
        printf("Player not found.\n");
    }
}
