#include <stdio.h>
#include <conio.h>
void main()
{
    int i;
    int student[50];
    clrscr();
    printf (" storing data in 1-D array : \n") ;
    for (i=0; i<50; i++)
    {
        printf (" enter element at location :%d\t", i) ;
        scanf ("%d", &student[i]) ;
    }
    printf ("\n displaying contents of array \n") ;
    for(i=0; i<50; i++)
        printf (" data on student[%d] is %d \n", i,student[i]) ;
    getch() ;
}
    