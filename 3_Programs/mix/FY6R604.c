#include <stdio.h>
#include <conio.h>
void main()
{
int i,a[3];
//clrscr();
 for(i=0;i<=2;i++)
{
 printf("enter a[%d]=>",i);
 scanf("%d",&a[i]);
}
for(i=0;i<3;i++)
{
printf("\n a[%d]=%d",i,a[i]);
}
//getch();
}
