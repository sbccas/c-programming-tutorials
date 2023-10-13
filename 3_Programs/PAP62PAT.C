/* REMARK
NAME:
TITLE: WAP to PRINT PATTERN
*            1             1           5            5             A
* *          1 2           2 2         5 4          4 4           A A
* * *        1 2 3         3 3 3       5 4 3        3 3 3         A A A
* * * *      1 2 3 4       4 4 4 4     5 4 3 2      2 2 2 2       A A A A
* * * * *    1 2 3 4 5     5 5 5 5 5   5 4 3 2 1    1 1 1 1 1     A A A A A
*/
#include<stdio.h>
#include<conio.h>
void main()
{
/*
int i,j;
//char c ='A';
clrscr();
	for (i=0;i<=4;i++)
	{
	   for(j=0;j<=i;j++)
	   {
	    printf("%d ",j);
	   }
	   printf("\n");
	}
*/

/*
int i;
i=65;
clrscr();
printf("DECIMAL\tVALUE");
for (i=32;i<=126;i++)
 {
  printf("Dec:%d\tValue%c\t",i,i);
 }
 */
/*
int i,j,k;
i=97;
clrscr();
for (j=0;j<=26;j++)
 {
	for(k=0;k<j;k++)
	{
	printf("%c ",i+k);

	}
	printf("\n");
 }
*/
//NESTED LOOPING  --->>> PATTERN
int i,j;
clrscr();
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=i;j++)
			{
			printf("*");
			}
			printf("\n");
		}



getch();
}











