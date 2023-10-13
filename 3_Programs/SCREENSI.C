#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k=1;
clrscr();
amroli:
if (k<3)
    {
  for (i=1;i<=9;i++)
  {
	for (j=1;j<=80;j++)
		{
		   printf("%d",i);
		}

     } k++;
    if (i > 8)
    {
  i =1;
  goto amroli;
     }
     }
getch();
}