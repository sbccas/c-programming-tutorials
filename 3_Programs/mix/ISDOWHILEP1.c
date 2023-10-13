/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1*/
/* 1 WAP TO SHOW DEMO OF Do WHILE LOOP (EXIT CONTROLLED LOOP) */

#include <stdio.h>
#include <conio.h>
void main()
{
 int n,s=0,i;
 //clrscr();
 printf("\n enter number:");
 scanf("%d",&n);
 i=1;
 do
 {
s=s+i;
printf("\nValue of i is : %d ",i);
printf("Value of Sum is : %d\n",s );
i=i+1;
 }while(i<=n);

printf("\nsum is=%d",s);
 getch();
}
