/*
NAME
TITLE: WAP to REVERSE A NUMBER : 1234--->> 4321
*/

#include <stdio.h>
#include <conio.h>
void main()
{
int i=56;
//float ans;
//ans= i/10;
//clrscr();
/*
printf("\n\nNUMBER = %d",i);
printf("\nNUMBER MOD 10 = %d\n",i%10);
printf("NUMBER DIVIDE BY 10 = %d",i/10);
printf("\nNUMBER DIVIDE BY 10 = %f",ans);
*/

int res, rev;
clrscr();
i=1234;
res=0;
rev=0;
printf("\nORIGINAL NUMBER : %d\n",i);
 while (i%10>0)
 {
	res= i%10;   //1234--->> 4, 123---> 3 ,
	printf("RES = %d\n",res);
	rev =res + rev*10; // 4 + 0 * 10 = 4, 3+ 4 * 10 = 43,
	printf("REV = %d\n",rev);
	i = i/10;     //  1234 /10 --->123, 12
	printf("NEW NUMBER = %d",i);
 }
getch();
}

















