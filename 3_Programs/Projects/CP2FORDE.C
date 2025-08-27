/*DOCUMENTATION SECTION
WAP TO SHOW DEMO OF FOR LOOP STATEMENT
*/
#include <stdio.h>
#include <conio.h>
void main()
{
int i,n,sum=0;
clrscr();
printf("WHAT IS YOUR WISH NUMBER:");
scanf("%d",&n);

for (i=1;i<=n;i++)
    {
    printf("I AM INSIDE FOR LOOP\n");
    sum = sum +i;
    }
    printf("YOUR TOTAL WISH NUMBER SUM IS : %d\n",sum);
    printf("VALUSE OF i is = %d",i);
getch();











}