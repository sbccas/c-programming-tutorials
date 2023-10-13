/* Hitesh Patel Roll No: 999
WAP to demonstrate use of SWITCH Case Statement
with String Input data
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
 char day;
 //clrscr();
 printf("\n Please Enter Day in Word:\n ");
 scanf("%c",day);
 switch(day)
 {
case "M":
printf("\n Today is Monday");
break;
case 'T':
printf("\n Today is Tuesday");
break;
case 'W':
printf("\n Today is wednesday");
break;
case 'H':
printf("\n Today is Thusday");
break;
case 'F':
printf("\n Today is Friday");
break;
case 'S':
printf("\n Today is Saturday");
break;
case 'U':
printf("\n Today is Sunday");
break;
case 'L':
printf("\n Today is Holiday for MAHAShivRatri");
break;
default:
 printf("\n Invalid Day Character");
 break;
}
 getch();
 }
