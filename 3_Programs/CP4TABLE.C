/* REMARK
NAME:
TITLE: WAP to PRINT TABLE OF 1 USING FOR LOOP
1 X 1 = 1
1 X 2 = 2
*/
#include <stdio.h>
#include <conio.h>
void main()
{
/*    int i, j, k;
    clrscr();
    for (j = 1; j <= 3; j++)
    {
	for (i = 1; i <= 10; i++)
	{
	    printf("%d X %d = %d\n", j, i, j * i);
	   // for (k = 1; k <= 10; k++)
	  //  {
	   //     printf("HELLO");
	   // }
	}
    }
 */

int i,n;
clrscr();
	printf("\n\n\nWHICH TABLE YOU WANT TO PRINT :");
	scanf("%d",&n);
	printf("\n");
	for(i=1;i<=10;i++)
	{
	printf("%d X %d = %d\n",n,i,n*i);
	}
getch();
}
