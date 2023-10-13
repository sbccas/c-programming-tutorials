/* Hitesh Patel Roll No: 999
WAP to demonstrate use of While
SUM OF N NUMBERS DEMO      1+2+3+4+5+6+7+8+9+10+=55
*/
#include <stdio.h>
#include <conio.h>
void main()
{
 int n,s=0,i;
 printf("\n enter number:");
 scanf("%d",&n);
 i=1;
 while(i<=n)
 {
        printf("%d",i);
        printf("+");
        s=s+i;
        i=i+1; 
 }
 printf("=%d",s);
 getch();
}
