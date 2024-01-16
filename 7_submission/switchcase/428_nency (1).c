# include <stdio.h>
# include <conio.h>

void main ()
{
    char myname[20];
    int code;

    printf("Enter the code\n");
    printf("Enter 1 to print your first name\n");
    printf("Enter 2 to print your last name\n");
    scanf("%d", &code);

    switch(code)
    {
    case 1:
        printf("My first name is Satani\n");
        break;
    case 2:
        printf("My last name is Nency \n");
        break;

    default:
        printf("I don't want to print\n");
        break;
    }
    getch();
}