/*
TITLE : WAP TO SHOW DEMO OF WHILE LOOP
YEAR:
DIV:
ROLL;

*/
#include<stdio.h>
#include<conio.h>
int main()
{
//clrscr();
int i=1;
int n=10;
int sum = 0;
clrscr();
	while (i <= n)
		{
	       //	printf("VALUE OF I IS = %d\n",i);
		sum = sum +i;
		i = i +1;
		}
		printf("\nSUM OF  %d is %d ", n,sum);


getch();
return 0;
}