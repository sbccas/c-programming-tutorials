/* REMARK
NAME: HITESH P PATEL ROLL NO: 999
TITLE: WAP to show demo of break Statement :
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
		for (i=1;i<=10;i++)
		{

			//printf("\nNumber: %d\n",i);
			if(i%2==0)
			{
			continue;
			}
			printf("%d\n",i);


		}
       printf("BYE\n");
getch();




}