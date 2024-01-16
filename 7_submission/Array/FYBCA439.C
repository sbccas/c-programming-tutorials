/*write a program to read and print 1-dim array
NAME = Mital vyas
ROLL NO =439
*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,m[5];
printf("welcome to read and print 1-dim array program\n\n");
	for(i=0;i<5;i++)
	{
		printf("please enter a value %d : ",i);
		scanf("%d",&m[i]);
	}
	printf("\nprinting a value\n");
	for(i=0;i<5;i++)
	printf("\tm[%d] : %d\n",i,m[i]);

getch();
}
