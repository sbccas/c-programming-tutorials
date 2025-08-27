/*DOCUMENTATION SECTION
WAP TO SHOW DEMO OF DO...WHILE LOOPING STATEMENT
*/
#include <stdio.h>
#include <conio.h>
void main()
{
int i = 1;
int n,sum=0;
clrscr();
printf("WHAT IS YOUR WISH NUMBER:");
scanf("%d",&n);
do
{
printf("I AM INSIDE DO LOOP: %d\n",i);
sum = sum +i;
i = i+1;

}while(i<=n);
printf("I AM OUTSIDE DO LOOP:\n");
printf("YOUR TOTAL WISH NUMBER SUM IS : %d",sum);


getch();

}