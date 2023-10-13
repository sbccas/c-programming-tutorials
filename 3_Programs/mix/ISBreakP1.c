/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1 */
/* 1 WAP TO SHOW DEMO OF BREAK STATEMENT  */
/*       */

#include <stdio.h>
#include <conio.h>
void main()
{
 int n,i,p=0;
// clrscr();
 printf("\n enter number:");
 scanf("%d",&n);

 // drks reak
 for(i=2;i<=n-1;i++)
 {
if(n%i==0)
 p=1;
 break;
 }
 if(p==0)
 printf("\n number is prime number:");
 else
 printf("\n number is not prime number:");
 //getch();
}