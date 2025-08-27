/*
	Name: Hitesh Patel Roll No: 999
	Title: WAP for SWAPINMG TWO NUMBERS WITHOUT USING THIRD VARIABLE
*/
#include <stdio.h>
#include <conio.h>
void main()
{
   int A,B;
   clrscr();
   //user input  of DATA
   printf("Program to swap two numbers without using third variable\n");

  printf("Enter Number 1: \n");
   scanf("%d",&A);
   printf("Enter Number 2: \n");
   scanf("%d",&B);
   // SWAP TWO NUMBERS
   printf("NUMBERS BEFORE SWAPING\n");
   printf("A = %d and B = %d\n",A,B);
   A = A + B;
   B = A - B;
   A = A- B;
   printf("NUMBERS after SWAPING\n");
   printf("A= %d and B= %d\n",A,B);

  getch();
}





