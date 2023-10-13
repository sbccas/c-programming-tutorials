/*
	Name: Hitesh Patel Roll No: 999
	Title: WAP to check whether Year is Leap Year or Not.
*/
#include <stdio.h>
#include <conio.h>
void main()
{
   int choice;
   int n1,n2;
   int  sum, sub,mul;
   float divide;

   clrscr();
   printf("WELCOME TO menu driven program of calculator \n");
   printf("PLEASE SELECT ANY ONE CHOICE:\n");
   printf("1. ADD:\n");
   printf("2. SUB:\n");
   printf("3. MUL:\n");
   printf("4. DIV:\n");
   printf("5. EXIT:\n");
   scanf("%d",&choice);
   printf("PLEASE ENTER NUMBER 1:\n");
   scanf("%d",&n1);
   printf("PLEASE ENTER NUMBER 2:\n");
   scanf("%d",&n2);
   // IMPLEMENT SWITCH CASE
   switch(choice)
   {
   case 1:
	   sum = n1+n2;
	   printf("YOUR SUM IS = %d",sum);
	   break;



   


   }



   getch();
}





