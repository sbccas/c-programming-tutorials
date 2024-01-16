/*****************************
name=asodariya priyanshi
topic=nested switch cash
***************************/
#include<stdio.h>
#include<conio.h>
void main()
{
int choice,travel choice;

printf("welcome to our menu ! please select an option:\n");
printf("1. visit kedarnath\n");
printf("2. explore goa\n");
printf("3. travel by bus,car,or train\n");
printf("4. watch Dream girl 2\n");
printf("5.watch gadar 2\n");

printf("enter your choice:");
scanf("%d",&MainChoice);

switch(MainChoice){
case 1:
      printf("you have chosen to visit kedarnath.have a safe journey!\n");
break;
case 2:
      printf("you have chosen to explore goa. enjoy your time!\n");
break;
case 3:
      printf("please select your mode of travel:\n");
      printf("1.bus\n");
      printf("2.car\n");
      printf("3.train\n");
      scanf("%d",&travelchoice);

      switch(travelchoice){
      case 1:
      printf("you have chosen to travel by bus.enjoy your ride!\n");
      break;
      case 2:
      printf("you have chosen to travel by car. have a great trip!\n");
      break;
      case 3:
printf("you have chosen to travel by train. have a comfortable journey!\n");
     break;
}
   break;
   case 4:
   printf("you have chosen to watch dreamgirl2. enjoy the movie!\n");
   break;
   case 5:
   printf("you have chosen to watch gadar2.sit back and enjoy the film!\n");
   break;
   default:
   printf("invalidd choice.please select a valid option.\n");
   break;
   }
   getch();
   }
