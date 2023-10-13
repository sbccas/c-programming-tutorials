/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1*/
/* 1 WAP TO SHOW DEMO OF BACKWARD JUMPING */

#include <stdio.h>
#include <conio.h>
int main()
{
 int i=1;
 //clrscr();
 x:
 if(i<=10)
 {
 printf("\n%d",i);
 i=i+1;
 goto x;
 }
 getch();
 return 0;
}