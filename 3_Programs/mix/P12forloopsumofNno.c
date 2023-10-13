/* Hitesh Patel Roll No: 999
WAP to demonstrate use of For Loop SUM OF N NUMBERS

*/
#include <stdio.h>
#include <conio.h>
void main()
{
 int n,s=0,i;
 //clrscr();
 printf("\n enter number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
s=s+i;
printf("%d",i);
printf("+");
 }
 printf("\nsum is=%d",s);
 getch();
}
