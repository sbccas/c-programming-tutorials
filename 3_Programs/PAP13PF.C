/*  REMARK
    Name: Hitesh Patel Roll No: 999
    Title: WAP for printing Square and Cube of a Number using function
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int number, square , cube, power, powerans;
clrscr();
printf("\nTitle: WAP for printing Square and Cube of a Number using function ");
printf("\nENTER NUMBER : ");
scanf("%d",&number);
printf("\nEnter POwer : ");
scanf("%d",&power);
square = number * number;
cube = number * number * number ;
powerans = pow(number,power);
printf("\nSQURE IS : %d \n CUBE is : %d ",square, cube);
printf("\nPower of %d raised to %d is = %d",number,power,powerans);
getch();
}


