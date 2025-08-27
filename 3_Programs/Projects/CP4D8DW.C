/*
WAP TO SHOW DEMO OF DO WHILE LOOP

*/

#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum;
i=1;
sum = 0;
clrscr();
printf("DEMO OF DO ..... WHILE LOOP:\n");
do
{
	sum = sum+i;
	i = i+1;
}while (i <= 10);
printf("SUM IS  = %d",sum);
getch();
}
