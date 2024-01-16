/*
Name : Raj Vasoya
Div : 8
Roll no : 867

Titel :ENTER 10 NUMBER AND PRINT 10 NUMBER BY USING ARRAY.
*/
#include<stdio.h>
#include<conio.h>

void main()
{
  int i,fybca[10];
  clrscr();

  printf("\n STORING A DATA IN 1-D ARRAY : \n");

  printf("<====================================>");

  for(i=1;i<=10;i++)
  {
	printf("\n ENTER THE VALUE OF ARRAY : ",i);
	scanf("%d",&fybca[10]);
  }

  printf("\n\n\n");

  printf("<====================================>");

  printf("\n\n\n");

  printf("\n DISPLAY DATA STORED IN 1-D ARRAY : ");

  printf("\n");

  printf("<====================================>");

  printf("\n");

  for(i=1;i<=10;i++)
  {
	printf("\n THE VALUE OF ARRAY YOU ENTERED => %d",i,fybca[10]);
	printf("\n");
  }

  printf("<====================================>");

getch();
}