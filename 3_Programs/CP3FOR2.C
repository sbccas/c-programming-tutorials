/*DOCUMENTATION SECTION
WAP TO SHOW DEMO OF FOR LOOPING STATEMENT
*/
#include <stdio.h>
#include <conio.h>
void main()
{
long int i,n,sum=0;
clrscr();
printf("\n\n\n\n\nWHAT IS YOUR WISH NUMBER:");
scanf("%d",&n);
for (i=1000;i>=n;i++)
printf("%ld HELLO\n",i);
getch();
}