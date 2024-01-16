#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Movie {
    char title[50];
    int year;
};

void displayMovies(struct Movie movies[], int count) {
    printf("\nMovie Collection:\n");
    for (int i = 0; i < count; i++) {
        printf("%s (%d)\n", movies[i].title, movies[i].year);
    }
}

int searchMovieByYear(struct Movie movies[], int count, int year) {
    printf("\nMovies released in %d:\n", year);
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (movies[i].year == year) {
            printf("%s\n", movies[i].title);
            found = 1;
        }
    }
    return found;
}

int deleteMovieByTitle(struct Movie movies[], int *count, const char *title) {
    int found = 0;
    for (int i = 0; i < *count; i++) {
        if (strcmp(movies[i].title, title) == 0) {
            // Shift elements to fill the gap
            for (int j = i; j < (*count - 1); j++) {
                strcpy(movies[j].title, movies[j + 1].title);
                movies[j].year = movies[j + 1].year;
            }
            (*count)--;
            found = 1;
            printf("\n'%s' has been deleted from the collection.\n", title);
            break;
        }
    }
    return found;
}

int main() {
    struct Movie movies[100];
    int count = 0;
    int choice;

    while (1) {
        printf("\nMovie Collection Menu:\n");
        printf("1. Add a movie\n");
        printf("2. Display movies\n");
        printf("3. Search for movies by year\n");
        printf("4. Delete a movie by title\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the movie title: ");
                getchar(); // Consume the newline character
                gets(movies[count].title);
                printf("Enter the year: ");
                scanf("%d", &movies[count].year);
                count++;
                break;
            case 2:
                displayMovies(movies, count);
                break;
            case 3:
                printf("Enter the year to search for: ");
                int year;
                scanf("%d", &year);
                if (!searchMovieByYear(movies, count, year)) {
                    printf("No movies found for the year %d.\n", year);
                }
                break;
            case 4:
                printf("Enter the title of the movie to delete: ");
                getchar(); // Consume the newline character
                char deleteTitle[50];
                gets(deleteTitle);
                if (!deleteMovieByTitle(movies, &count, deleteTitle)) {
                    printf("Movie '%s' not found in the collection.\n", deleteTitle);
                }
                break;
            case 5:
                printf("Exiting the program.\n");
                getch(); // Wait for a key press before exiting
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }
}
    