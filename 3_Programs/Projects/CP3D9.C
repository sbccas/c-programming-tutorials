/*DOCUMENTATION SECTION
WAP TO FIND SUM OF N NUMBERS
*/
#include <stdio.h>
#include <conio.h>
void main()
{
//clrscr();
int i,n;
long int sum;
i= 1;
sum= 0;
clrscr();
printf("\nPROGRAM FOR SUM OF N NUMBERS:\n");
loop:
printf("\nPLEASE ENTER VALUE OF N:\n");
scanf("%d",&n);
// LOGIC SUM
	amroli:
	if (i<=n)
	{
		sum = sum +i;
		//printf("\nSUM OF %d is %d", i , sum);

		i = i +1;

		goto amroli;
	}
	printf("\nSUM OF %d is %ld", n , sum);

goto loop;
getch();
}
