#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int start,end;
clrscr();
printf("PLEASE ENTER START RANGE :");
scanf("%d",&start);
printf("PLEASE ENTER END RANGE :");
scanf("%d",&end);
	for (i=start;i<=end;i++)
	{
		printf("%d\t",i);
	}
getch();
}