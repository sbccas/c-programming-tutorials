/*
	Name: Hitesh Patel Roll No: 999
	Title: WAP for finding Area of Rectangle using Scanf.
*/
#include <stdio.h>
#include <conio.h>
void main()
{
   int area=0, length=0, width=0;
   //user input  of length
   printf("Program to find Area of RECTANGLE \n");

   printf("Enter Length : \n");
   scanf("%d",&length);
   printf("Enter Width : \n");
   scanf("%d",&width);
   area = length * width;
   printf("Area of RECTANGLE with Length of:%d and width  of:%d is = %d",length,width,area);
   getch();
}





