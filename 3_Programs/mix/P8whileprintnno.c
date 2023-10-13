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
s=s+i;
i=i+1;
 }
 printf("\nsum is=%d",s);
 getch();
}
