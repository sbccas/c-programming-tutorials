/*  REMARK
	Name: Hitesh Patel Roll No: 999
	Title: WAP for SWAPINMG TWO NUMBERS WITH USING THIRD VARIABLE
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int A,B,TEMP;
clrscr();
printf("\n\nPROGRAM FOR SWAPING TWO NUMBERS WITH USING THIRD VARIABLE\n");

printf("\n\nENTER NUMBER 1 : ");
scanf("%d",&A);
printf("ENTER NUMBER 2 : ");
scanf("%d",&B);
printf("\n\nNUMBERS BEFORE SWAPPING:");
printf("\nNUMBER 1 = %d and NUMBER 2 =%d",A,B);

TEMP = A;
A = B;
B = TEMP;

printf("\n\nNUMBERS AFTER SWAPPING:");
printf("\nNUMBER 1 = %d and NUMBER 2 =%d",A,B);
getch();
}








