/*  REMARK
	Name: Hitesh Patel Roll No: 999
	Title: WAP for SWAPINMG TWO NUMBERS WITHOUT USING THIRD VARIABLE
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int A, B;
clrscr();
printf("\n\nWAP FOR SWAPPPING TWO NUMBERS WITHOUT USING 3rd VARIBLE :");
printf("\nENTER NUMBER 1:");
scanf("%d", &A);
printf("\nENTER NUMBER 2:");
scanf("%d", &B);
printf("\nNUMBERS BEFORE SWAPPING:");
printf("\nNUMBER 1: %d  and Number 2: %d ",A,B);
A = A + B;
B = A -B;
A = A - B;
printf("\nNUMBERS AFTER SWAPPING:");
printf("\nNUMBER 1: %d  and Number 2: %d ",A,B);
getch();
}


