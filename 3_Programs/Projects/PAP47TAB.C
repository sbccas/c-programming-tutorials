/*  REMARK
Name: Hitesh Patel Roll No: 999
Title: WAP for PRINTING TABLE OF 1 TO 10 USING LOOPING
*/
#include<stdio.h>
#include<conio.h>
void main()
{
//TABLE OF 1
// 1 X 1 = 1
// 1 X 10 = 10
int i,j;
i=1,j;
clrscr();
//TABLE OF 1
printf("WHICH TABLE DO YOU WANT:\n");
scanf("%d",&j);
printf("TABLE OF %d\n",j);
for(i=1;i<=10;i++)
{ printf("%d X %d = %d\n",j,i,i*j);
}
getch();
}







