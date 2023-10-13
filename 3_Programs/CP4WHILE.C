/*
TITLE  WAP TO PRINT YOUTR NAME 10 TIMES.
NAME ROLL NO */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum,n;
i=1;
sum =0;
n=10;
clrscr();
	while(i<=n)
	{
	sum = sum + i;
	printf("SUM OF %d NUMBER IS : %d\n ",i,sum);
	i++;
	}

getch();
}