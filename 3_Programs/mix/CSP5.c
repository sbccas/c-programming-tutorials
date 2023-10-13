/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1*/
/*     5.  WAP to Read Numbers from 1 to 7 and Accordingly it should display 
   Monday to Sunday Using Switch-case */
 
#include <stdio.h> 
#include <conio.h>
void main() 
{
    int day;
   printf("WAP to Read Numbers from 1 to 7 and Accordingly it should display Monday to Sunday Using Switch-case : ");
printf("\n\n\n\nProgram By Hitesh Patel : \n\n\n\n\n\n\n");
    printf("Enter Day Number : ");
    scanf("%d",&day);
   switch (day)
   {
   case 1:
       printf("Monday");
       break;
   case 2:
       printf("Tuesday");
       break;
   case 3:
       printf("Wednesday");
       break;
   case 4:
       printf("Thursday");
       break;
   case 5:
       printf("Friday");
       break;
   case 6:
       printf("Saturday");
       break;
   case 7:
       printf("Sunday");
       break;
   
   default:
        printf("Invalid Day Number");
       break;
   }
        printf("\nHave a Nice Day....!!!");
}
