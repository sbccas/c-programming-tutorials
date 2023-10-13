/*DOCUMENTATION SECTION
WAP TO SHOW DEMO OF switch case STATEMENT
*/
#include <stdio.h>
#include <conio.h>
void main()
{
int choice;
int choicem;
clrscr();
 printf("\n WHAT YOU WOULD LIKE TO DO TODAY:\n");
 printf("1.WATCH MOVIE:\n");
 printf("2.PLAY GAMES:\n");
 printf("3.VISIT ZOO:\n");
 printf("4.GO TO DINNER:\n");
 printf("5.GO SHOPPING:\n");
 printf("6.DO NOTHING:\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
       printf("\n YOU SELECTED TO WATCH MOVIE");
       printf("\nPLEASE SELECT YOUR MOVIE:");
       printf("\nPLEASE SELECT YOUR MOVIE:");
       printf("\n1. AAVTAR:");
       printf("\n2. ARMAGEDON:");
       scanf("%d",&choicem);
       switch(choicem)
       {
	  case 1:
	  printf("\n YOU SELECTED AAVTAR MOVIE");
	  break;

       }
       break;
   case 2:
       printf("\n YOU SELECTED TO PLAY GAMES");
       break;
   case 3:
       printf("\n YOU SELECTED TO VISIT ZOO");
       break;

   case 4:
       printf("\n YOU SELECTED TO GO TO DINNER");
       break;

   case 5:
       printf("\n YOU SELECTED TO DO SHOPING");
       break;

    case 6:
       printf("\n YOU SELECTED TO DO NOTHING");
       break;

   default:
       printf("\n YOUR CHOICE IS SAME AS CHOICE NO 6:");
       printf("\n BYE");
    }
 printf("\nEXIT FROM SWITCH CASE");
 getch();

}