#include<stdio.h>
#include<conio.h>
void main()
{
int choice;
int ch;
      printf(" 1: sweets \n");
      printf(" 2: Snaks \n");
      printf(" 3: Fast food \n");
      printf(" 4: exit \n");
      printf("Enter your choice\n");
      scanf("%d",&choice);
      
      switch (choice)
      {
case 1:
      printf("\n Welcome to sweets shop\n");
      printf("\n 1: ladoo ");
      printf("\n 2: milkcake ");
      printf("\n Enter your choice");
      scanf("%d",&ch);
      switch(choice)
      {
      
 case 1:
      printf("\n you purchase ladoo");
      break;
 case 2:
      printf("\n you purchase milkcake ");
      break;
   default:
      printf("\n wrong choice");
      }
      break;
      
case 2:
      printf("\n Welcome to Snaks shop\n");
      printf("\n 1: Lays ");
      printf("\n 2: Kurkure ");
      printf("\n Enter your choice");
      scanf("%d",&ch);
      switch(ch)
      {
      
case 1:
      printf("\n you purchase lays");
      break;
case 2: 
       printf("\n you purchase Kurkure ");
       break;
       default:
       printf("\n Wrong choice");
       }
       break;
 case 3:      
      printf("\n Welcome to fast food corner\n");
      printf("\n 1: maggieb");
      printf("\n 2: macroni ");
      printf("\n Enter you choice");
      scanf("%d",&ch);
      switch(ch)
      {
      
case 1:
      printf("\n you purchase maggie");
      break;
case 2:
      printf("\n you purchase macroni ");
      break;
      default:
      printf("\n Wrong choice");
      }
      break;
case 4:
      exit(1);
      }
      getch();
      }



      