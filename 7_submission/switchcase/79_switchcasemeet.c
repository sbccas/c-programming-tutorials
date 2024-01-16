/*

title :menu driven program with switch case
name:pipaliya meet
roll no:479

*/

#include<stdio.h>
#include<conio.h>

void main()
{
 int a,b;
 clrscr();
 printf("select your subject option\n");
 printf("1.cppm\n");
 printf("2.dma\n");
 printf("3.ic\n");
 printf("4.maths\n");
 printf("5.cs\n");
 printf("6.ipdc\n");
 printf("7.hindi\n");
 printf("enter your a (1-7):\n");
 scanf("%d",&a);
 
 switch(a)
 {
  case 1:
    printf("1.your subject is cppm\n");
    printf("2.introduction\n");
    printf("3.input/output statement and operators\n"); 
    printf("4.decision making statement\n");
    printf("5.iterarive statement\n");
    printf("6.concepts of arrays and pointer\n");
    printf("-----------------------------------\n");
    printf("enter your ch(1-6):\n");
    printf("thank you👍\n");
    scanf("%d",&a);
    break;
    
   case 2:
    printf("your subject is dma\n");
    printf("1.concepts of worksheet\n");
    printf("2.formula,chart and data\n"); 
    printf("3.concepts of database\n");
    printf("4.normalization & concepts of sql\n");
    printf("5.queries\n");
    printf("6.sql\n"); 
    printf("7.dbms system\n");
    printf("-----------------------------------\n");
    printf("thank you👍\n");
    printf("enter your ch(1-7):\n");
    scanf("%d",&a);
    break;
    
  case 3:
    printf("your subject is ic\n");
    printf("1.introduction of computer\n");
    printf("2.basic computer architecture\n"); 
    printf("3.number system\n");
    printf("4.input & output device\n");
    printf("5.concepts of internet\n");
    printf("6.concepts of cpu");
    printf("-----------------------------------\n");
    printf("thank you👍\n");
    printf("enter your ch(1-6):\n");
    scanf("%d",&a);
    break;
    
  case 4:
    printf("your subject is maths\n");
    printf("1.set theory\n");
    printf("2.functions\n"); 
    printf("3.methemarical logic\n");
    printf("4.boolean algebra\n");
    printf("5.matrices determine\n");
    printf("6.geometry\n");
    printf("-----------------------------------\n");
    printf("thank you👍\n");
    printf("enter your ch(1-6):\n");
    scanf("%d",&a);
    break;
    
  case 5:
    printf("your subject is cs\n");
    printf("1.introduction\n");
    printf("2.fundamentals of grammar\n"); 
    printf("3.writing skill\n");
    printf("4.business writing\n");
    printf("5.report writing\n");
    printf("6.speking skill\n");
    printf("7.dicusion skill\n");
    printf("-----------------------------------\n");
    printf("thank you👍\n");
    printf("enter your ch(1-7):\n");
   scanf("%d",&a);
    break;
    
  case 6: 
    printf("your subject is english\n");
    printf("1.Let's design ourselves!\n");
    printf("2.Navnirmal of Ray The influence of habit\n"); 
    printf("3.Tendulkar and Tata\n");
    printf("4.Do you hear or understand by making a building,not?\n");
    printf("5.Failure-Welcome to a Pathasha challenge\n");
    printf("6.Failure-a school struggle-the elixir of life\n");
    printf("7.My India is great Glorious Past-1\n");
    printf("8.Glorious past-2\n");
    printf("-----------------------------------\n");
    printf("thank you👍\n");
    printf("enter your ch(1-8):\n");
    scanf("%d",&a);
    break;
    
  case 7:
  
    printf("your subject is hindi\n");
    printf("your subject is wonderful\n");
    printf("1.concept of hindi\n");
    printf("2.hindi grammer\n"); 
    printf("3.hindi ch1\n");
    printf("4.hindi ch2\n");
    printf("5.hindi ch3\n");
    printf("6.hindi g-1\n");
    printf("7.hindi g-2\n");
    printf("8.Glorious past-2\n");
    printf("-----------------------------------\n");
    printf("thank you👍\n");
    printf("enter your ch(1-8):\n");
    scanf("%d",&a);
    break;
    
  default:
  
  case 8:
    printf("this invalid subject\n");
    printf("to click 1 number to open cppm chapter\n");
    printf("to click 2 number to open  dma chapter\n");
    printf("to click 3 number to open  ic chapter\n");
    printf("to click 4 number to open maths chapter\n");
    printf("to click 5 number to open cs chapter\n");
    printf("to click 6 number to open ipdc chapter\n");
    printf("to click 7 number to open  hindi chapter\n");
    printf("thank you👍\n");
    break;
    
  }
  
  switch(b)
 {
  case 1:
    printf("1.your subject is cppm\n");
    printf("2.introduction\n");
    printf("3.input/output statement and operators\n"); 
    printf("4.decision making statement\n");
    printf("5.iterarive statement\n");
    printf("6.concepts of arrays and pointer\n");
    printf("-----------------------------------\n");
    printf("enter your ch(1-6):\n");
    printf("thank you\n");
    scanf("%d",&a);
    break;
    
   case 2:
    printf("your subject is dma\n");
    printf("1.concepts of worksheet\n");
    printf("2.formula,chart and data\n"); 
    printf("3.concepts of database\n");
    printf("4.normalization & concepts of sql\n");
    printf("5.queries\n");
    printf("6.sql\n"); 
    printf("7.dbms system\n");
    printf("-----------------------------------\n");
    printf("thank you\n");
    printf("enter your ch(1-7):\n");
    scanf("%d",&a);
    break;
    
  case 3:
    printf("your subject is ic\n");
    printf("1.introduction of computer\n");
    printf("2.basic computer architecture\n"); 
    printf("3.number system\n");
    printf("4.input & output device\n");
    printf("5.concepts of internet\n");
    printf("6.concepts of cpu");
    printf("-----------------------------------\n");
    printf("thank you\n");
    printf("enter your ch(1-6):\n");
    scanf("%d",&a);
    break;
    
  case 4:
    printf("your subject is maths\n");
    printf("1.set theory\n");
    printf("2.functions\n"); 
    printf("3.methemarical logic\n");
    printf("4.boolean algebra\n");
    printf("5.matrices determine\n");
    printf("6.geometry\n");
    printf("-----------------------------------\n");
    printf("thank you\n");
    printf("enter your ch(1-6):\n");
    scanf("%d",&a);
    break;
    
  case 5:
    printf("your subject is cs\n");
    printf("1.introduction\n");
    printf("2.fundamentals of grammar\n"); 
    printf("3.writing skill\n");
    printf("4.business writing\n");
    printf("5.report writing\n");
    printf("6.speking skill\n");
    printf("7.dicusion skill\n");
    printf("-----------------------------------\n");
    printf("thank you\n");
    printf("enter your ch(1-7):\n");
   scanf("%d",&a);
    break;
    
  case 6: 
    printf("your subject is english\n");
    printf("1.Let's design ourselves!\n");
    printf("2.Navnirmal of Ray The influence of habit\n"); 
    printf("3.Tendulkar and Tata\n");
    printf("4.Do you hear or understand by making a building,not?\n");
    printf("5.Failure-Welcome to a Pathasha challenge\n");
    printf("6.Failure-a school struggle-the elixir of life\n");
    printf("7.My India is great Glorious Past-1\n");
    printf("8.Glorious past-2\n");
    printf("-----------------------------------\n");
    printf("thank you\n");
    printf("enter your ch(1-8):\n");
    scanf("%d",&a);
    break;
    
  case 7:
  
    printf("your subject is hindi\n");
    printf("your subject is wonderful\n");
    printf("1.concept of hindi\n");
    printf("2.hindi grammer\n"); 
    printf("3.hindi ch1\n");
    printf("4.hindi ch2\n");
    printf("5.hindi ch3\n");
    printf("6.hindi g-1\n");
    printf("7.hindi g-2\n");
    printf("8.Glorious past-2\n");
    printf("-----------------------------------\n");
    printf("thank you\n");
    printf("enter your ch(1-8):\n");
    scanf("%d",&a);
    break;
    
  default:
  
  case 8:
    printf("this invalid subject\n");
    printf("to click 1 number to open cppm chapter\n");
    printf("to click 2 number to open  dma chapter\n");
    printf("to click 3 number to open  ic chapter\n");
    printf("to click 4 number to open maths chapter\n");
    printf("to click 5 number to open cs chapter\n");
    printf("to click 6 number to open ipdc chapter\n");
    printf("to click 7 number to open  hindi chapter\n");
    printf("thank you\n");
    break;
    
  }
   getch();
 }