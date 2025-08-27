/*DOCUMENTATION SECTION
WAP TO SHOW DEMO OF NESTED FOR LOOP STATEMENT
*/
#include <stdio.h>
//#include <conio.h>
int main()
{
int i,j;
//clrscr();
	 printf("ENTER NUMBERS FOR * SQUARE : ");
	 scanf("%d",&i);
	 for (j=1;j<=i;j++)
	 printf("Number = %d and its Square = %d\n",j, j*j);


return 0;
	//getch();

}