/*****************************************
2. Write a Program for Using break and Continue :
Programer -Amroli BCA
Written For - http://www.amrolicollege.ac.in
******************************************/

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for (i=1;i<=10;i++)
	{
	       for (j=1;j<=10;j++)
		{
		continue;
		printf("j = %d\t",j);
		continue;

		}
		printf("i = %d\t",i);


	}
	getch();
 }





