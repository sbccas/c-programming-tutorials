/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1*/
/* 1 WAP TO SHOW DEMO OF CONTINUE STATEMENT  */
/*       */

#include <stdio.h>
#include <conio.h>
void main()
{
 int x;
 //clrscr();
 for(x=1;x<=10;x++)
 {
if(x%2==0)
 continue;
 printf("\n %d",x);
 }
// getch();
}