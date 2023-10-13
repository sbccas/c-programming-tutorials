/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1*/
/* 1 WAP TO SHOW DEMO OF NESTED FOR LOOP (PATTERN PROGRAMS) */

#include <stdio.h>
#include <conio.h>
void main()
{
 int n,i,j,s;
// clrscr();
 printf("\n enter number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
for(s=1;s<=n-i;s++)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf(" %d ",j);
}
printf("\n");
 }
 getch();
}
