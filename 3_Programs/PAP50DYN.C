/* REMARK
NAME: HITESH P PATEL ROLL NO: 999
TITLE: 50 WAP to Print Reverse of the Numbers
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
printf("Please Enter Number 1: ");
scanf("%d",&i);
printf("Please Enter Number 2: ");
scanf("%d",&j);
//CHECK FOR LARGER NUMBER AND THEN CHANGE THE STARTING RANGE IN LOOP
if(i < j)
{
	i= i+j;
	j = i-j;
	i = i-j;
}
//NOW VALUES ARE CHANGED AND iis LARGER NUMBER
for (k=i;k>j;k--)
{
printf("Number: %d\t",k);
}
getch();
}