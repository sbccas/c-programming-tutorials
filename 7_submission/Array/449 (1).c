#include <stdio.h>
#include <conio.h>

void main()
{
    int std[10], i;
    clrscr();
    printf("\t\t\tWelcome to my program");
    printf("Enter Your Data::---\n");

    for ( i = 0; i < 10; i++)
    {
        printf("std[%d]=",i);
        scanf("%d",&std[i]);
    }
    
    printf("Your Data ::---\n");

    for ( i = 0; i < 10; i++)
    {
        printf("std[%d]=%d\n",i,std[i]);
    }
    
    printf("\nGood Bye");
    getch();
}