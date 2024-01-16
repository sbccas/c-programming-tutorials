#include<stdio.h>
#include<conio.h>
void main()
{
 float num1,num2,result;
 char op;

clrscr();
 printf("enter the first number :");
 scanf("\n%f",&num1);
 printf("enter the operation :");
 scanf(" %c",&op);
 printf("enter the second number :");
 scanf("\n%f",&num2);

 switch(op)
 {
 case '-':
 result = num1 - num2;
 printf("\n%f",result);
 break;
 case '+':
 result = num1 + num2;
 printf("\n%f",result);
 break;
 case '*':
 result = num1 * num2;
 printf("\n%f",result);
 break;
 case '/':
 result = num1 / num2;
 printf("\n%f",result);
 break;
 default:
 printf("value are not valid");

}


getch();

}