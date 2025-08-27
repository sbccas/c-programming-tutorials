/*DOCUMENTATION SECTION
WAP TO SHOW DEMO OF NESTED FOR LOOP STATEMENT
*/
#include <stdio.h>
#include <conio.h>
void main()
{
int i,j;
clrscr();
// 1 X 1 = 1  n*i       a*b;  a =1, b =4  , a*b =4
// 1 X 2 = 2
// 1 X 10 =10

     for(i=1;i<=10;i++)
     {
       //	printf("TABLE OF %d :",i);
	for (j=1;j<=5;j++)
	{
	  printf("%d X %d = %d\t",j,i,i*j);
	}
	printf("\n");
    }
getch();

}