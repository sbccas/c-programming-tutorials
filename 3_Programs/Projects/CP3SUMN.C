
/*DOCUMENTATION SECTION

WAP TO FIND SYUM OF N NUMBERS
*/
#include <stdio.h>
#include <conio.h>
void main()
{
//clrscr();
int i,n,j;
long int sum;
clrscr();
i = 1;
sum = 0;
j = 1;
loop:
printf("\nPress any  one from following options:\n");
printf("1. Continue....\n");
printf("2. Exit\n");
scanf("%d", &j);

switch(j)
{
	case 1:
		{
		printf("\nPROGRAM FOR FINDING SUM OF N NUMBERS:");
		printf("\nPLEASE ENTER N: ");
		scanf("%d",&n);
		//LOGIC FOR FINDING SUM
		s1:
		if (i<=n)
		{
		sum = sum + i;
		printf("SUM OF %d Numbers = %ld\n",i,sum);
		i = i+1;
		//printf("SUM OF %d Numbers = %ld\n",i,sum);

		 goto s1;
		}
		//printf("SUM OF %d Numbers = %ld",n,sum);
		goto loop;
				}
		break;
	case 2:
	{
	exit();
	}
getch();
}
}