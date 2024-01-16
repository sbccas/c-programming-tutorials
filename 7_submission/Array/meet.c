#include<stdio.h>
#include<conio.h>

void main()
{
 int number[5],i;
 clrscr();
for(i=0;i<5;i++)
{
  clrscr();
  printf("enter %d element=",i);
  scanf("℅d",&number[i]);
}
  clrscr();
  printf("Arrey value is\n");
for(i=0;i<5;i++)
{
  printf("number[%d]=%d\n",i,number[i]); 
}
getch();
}