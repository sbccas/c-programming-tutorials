/*
	Name: Hitesh Patel Roll No: 999
	Title: WAP for Sum of N Numbers using For Loop.
*/
#include <stdio.h>
#include <conio.h>
void main()
{
   int i, sum = 0,n;
   //user input  of n
   printf("Enter your Number: \n");
   scanf("%d",&n);
   //for loop
   for(i=1;i<=n;i++)
   sum = sum +i;
   printf("TOTAL SUM OF %d NUMBER is = %d",n,sum);




   getch();
}





