/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1*/
/* 1 WAP TO SHOW DEMO OF FOR LOOP (ENTRY CONTROLLED LOOP) */

#include <stdio.h>
#include <conio.h>
void main()
{
 int n,s=0,i;
// clrscr();
 printf("\n enter number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
s=s+i;
 }
 printf("\nsum is=%d",s);
 getch();
}
