#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

struct moviedetails{
    char name[50];
    char genre[50];
    char director[50];
    int year;
    int rate;

};

struct moviedetails movie[10];
int movieCount = 0; 
void enter(int count) {
    if (movieCount + count > 10) {
        printf("Cannot add more movies. Maximum limit of 10 reached.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        printf("Enter movie name: ");
        getchar();
        fgets(movie[movieCount].name, 50, stdin);
        movie[movieCount].name[strcspn(movie[movieCount].name, "\n")] = '\0';

        printf("Enter movie genre: ");
        fgets(movie[movieCount].genre, 50, stdin);
        movie[movieCount].genre[strcspn(movie[movieCount].genre, "\n")] = '\0';

        printf("Enter movie director: ");
        fgets(movie[movieCount].director, 50, stdin);
        movie[movieCount].director[strcspn(movie[movieCount].director, "\n")] = '\0';


        int validYear = 0;
        while (!validYear) {
            char yearInput[10];
            printf("Enter movie year: ");
            fgets(yearInput, 10, stdin);


            if (sscanf(yearInput, "%d", &movie[movieCount].year) == 1) {
                validYear = 1;
            } else {
                printf("Invalid input. Please enter a valid year (e.g., 2020).\n");
            }
        }


        int validRate = 0;
        while (!validRate) {
            char rateInput[10];
            printf("Enter movie rating (1-10): ");
            fgets(rateInput, 10, stdin);

            if (sscanf(rateInput, "%d", &movie[movieCount].rate) == 1 &&
                movie[movieCount].rate >= 1 && movie[movieCount].rate <= 10) {
                validRate = 1;
            } else {
                printf("Invalid input. Please enter a rating between 1 and 10.\n");
            }
        }

        movieCount++;
    }
}
void search(char ginput[10]) {
    int found = 0;
    for (int i = 0; i < 10; i++) {
        if (strcmp(ginput, movie[i].genre) == 0) {
            printf("Name: %s, Director: %s, Year: %d, Rating: %d\n", 
                   movie[i].name, movie[i].director, movie[i].year, movie[i].rate);
            found = 1;
        }
    }

    if (!found) {
        printf("No movies found in the genre '%s'.\n", ginput);
    }
}
void main(){
     char user[10];
    do
    {
       
        printf("enter add to add movie and search to search movie, exit for exit program:\n ");
        scanf("%s",&user);

        for (int i = 0; i < strlen(user); i++) {
        user[i] = tolower(user[i]);
        }
        if (strcmp(user, "add") == 0) {
            int count;
            printf("how many movies you want to add: ");
            scanf("%d",&count);
            enter(count);
        } else if (strcmp(user, "search") == 0) {
            char ginput[10];
            printf("enter genre to search: ");
            scanf("%s",&ginput);
            for (int i = 0; i < strlen(ginput); i++) {
            ginput[i] = tolower(ginput[i]);
            }
            printf("Searching for a movie...\n");
            search(ginput);


        } else if (strcmp(user,"exit")!=0){
            printf("Invalid command.\n");
        }

    }while (strcmp(user,"exit")!=0);
    printf("exiting");

}