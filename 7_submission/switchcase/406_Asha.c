#include <stdio.h>
#include <conio.h>

int main() {
    int choice;

    clrscr();

    // Display menu
    printf("Welcome to the menu-driven program of your choice\n");
    printf("Please select your favorite choice:\n");
    printf("1. Actor\n");
    printf("2. Actress\n");
    printf("3. Movie\n");
    printf("4. Singer\n");
    printf("5. Song\n");
    printf("6. Food\n");
    printf("7. Sweet\n");
    printf("8. Subject\n");
    printf("9. Festival\n");
    printf("10. Exit\n");
    scanf("%d", &choice);

    // Implement switch case
    switch (choice) {
    case 1:
        printf("Your favorite actors:\n");
        printf("i. Ranbir Kapoor\n");
        printf("ii. Kartik Aryan\n");
        printf("iii. Mahesh Babu\n");
        break;

    case 2:
        printf("Your favorite actresses:\n");
        printf("i. Alia Bhatt\n");
        printf("ii. Anushka Sharma\n");
        printf("iii. Samantha Prabhu\n");
        break;

    case 3:
        printf("Your favorite movies:\n");
        printf("i. Yeh Jawani Hai Deewani\n");
        printf("ii. Chhello Divas\n");
        printf("iii. Tevar\n");
        break;

    case 4:
        printf("Your favorite singers:\n");
        printf("i. Arijit Singh\n");
        printf("ii. Darshan Raval\n");
        printf("iii. Shreya Ghoshal\n");
        break;

    case 5:
        printf("Your favorite songs:\n");
        printf("i. Na Hoke Bhi\n");
        printf("ii. Sahiba\n");
        printf("iii. Manava\n");
        break;

    case 6:
        printf("Your favorite foods:\n");
        printf("i. Manchurian\n");
        printf("ii. Khavsa\n");
        printf("iii. Pani Puri\n");
        break;

    case 7:
        printf("Your favorite sweets:\n");
        printf("i. Kaju Katli\n");
        printf("ii. Kaju Kashata\n");
        printf("iii. Chocolate\n");
        break;

    case 8:
        printf("Your favorite subjects:\n");
        printf("i. Maths\n");
        printf("ii. DMA\n");
        printf("iii. CPPM\n");
        break;

    case 9:
        printf("Your favorite festivals:\n");
        printf("i. Rakshabandhan\n");
        printf("ii. Navaratri\n");
        printf("iii. Diwali\n");
        break;

    case 10:
        printf("Exiting the program\n");
        break;

    default:
        printf("Invalid choice. Please select a valid option.\n");
        break;
    }

    getch();
    return 0;
}