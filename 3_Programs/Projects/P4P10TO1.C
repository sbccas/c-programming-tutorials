/* Name: Hitesh Patel Roll No: 999
   Title: WAP to print Numbers from 1 to 10.
*/
#include <stdio.h>
#include <conio.h>
void main()
{
   int n=1;
   clrscr();
   printf("\n\n\n\n\n\nWELCOME TO PROGRAM OF PRINT 1 to 10\n");
amroli:   if (n<=10)
   {
    printf("%d\t",n);
    n = n+1;
    goto amroli;
   }
   printf("\nEnd of Program\n");
   getch();
}


