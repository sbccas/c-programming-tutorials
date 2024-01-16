/* 
Programmer : Nevil Usdad
ROLL NO : 425
Title : WAP for print a number using continue statememt
*/


#include<stdio.h>
#include<conio.h>
void main()
{
int i;
clrscr();
     for(i=1;i<=107;i++)
     {
     if(i==95)
     {
     continue;
     }
     printf("%d\n",i);
     }
 printf(" THANK YOU , HAVE A GOOD DAY\n");
 getch();
 }