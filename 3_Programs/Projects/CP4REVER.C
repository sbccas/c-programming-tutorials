/* REMARK
NAME:
TITLE: WAP to PRINT REVERSE NUMBER AND SUM OF DIGITS OF NUMBER
E.G:  1234   ---->>  4321      SUM = 10
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
//int i,j;
//i=ceil(123.1);
//j = floor(123.1);
//clrscr();
//printf("YOUR VALUE =FLOOR= %d  CEIL =  %d",j,i);
/*
int i=1453;
int res,sum;   // res will store individual last digit 1234 --->> 4
		// sum will store total of 4+3+2+1 = 10
int reverse=0;  //reverse number 1234--->>>4321
sum = 0;
clrscr();
printf("\n\n\n\nYOUR NUMBER IS: = %d\n",i);
while (i>0)   // 1234 , 123, 12, 1, 0   -->FALSE
	{
	res = i%10;     // 1234 ---> 4   123-->3
	reverse = res + reverse*10;  //1234 ---> reverse =  4 + reverse * 10
	sum +=res;     // sum = sum + res;  4 + 3 + 2 + 1 = 10
	printf("LAST DIGIT : %d\n",res);
	i = i/10;      //1234 --> 123.4 = 123   // 1 / 10 = 0.1 -> 0
	}
printf("SUM OF DIGITS IS = %d\n",sum);
printf("REVERSE NUMBER IS : %d\n",reverse);
*/
int i;
	clrscr();
	for(i=100;i>=91;i--)
	{
	 printf("%d MOD 10 = %d \t",i,i%10);
	}

getch();

}











