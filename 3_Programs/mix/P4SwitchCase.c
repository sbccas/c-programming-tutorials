/* Hitesh Patel Roll No: 999
WAP to demonstrate use of SWITCH Case Statement
*/
#include <stdio.h>
#include <conio.h>
void main()
{
 int num;
 //clrscr();
 printf("\n Please Enter Day in Number: ");
 scanf("%d",&num);
 switch(num)
 {
case 1:
printf("\n Today is Monday");
break;
case 2:
printf("\n Today is Tuesday");
break;
case 3:
printf("\n Today is wednesday");
break;
case 4:
printf("\n Today is Thusday");
break;
case 5:
printf("\n Today is Friday");
break;
case 6:
printf("\n Today is Saturday");
break;
case 7:
printf("\n Today is Sunday");
break;
case 11:
printf("\n Today is Holiday for MAHAShivRatri");
break;
default:
 printf("\n Invalid Day Number");
 break;
}
 getch();
 }
