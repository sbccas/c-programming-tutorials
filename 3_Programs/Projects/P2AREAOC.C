/* Name: Hitesh Patel Roll No: 999
   Title: WAP to find area of Circle using Scanf().
*/
#include <stdio.h>
#include <conio.h>
#define pi 3.14
int main()
{
    float area;
    int radius;
   clrscr();
   printf("ENTER RADIUS OF CIRCLE\n");
   scanf("%d",&radius);
   area = pi * radius * radius;
   printf("\nAREA OF CIRCLE IS %5.2f\n",area);
   getch();
   }


