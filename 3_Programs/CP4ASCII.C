#include<stdio.h>
#include<conio.h>
void main()
{
//PRINTING ABCD IN CAPTIAL
int i;
clrscr();
for (i=48; i<=122;i++)
{
	if (i>=48 && i<=57)
	{
	printf("%c\t",i);
	}
	else if (i>=65 && i<=90)
	{
	printf("%c\t",i);
	}
	else if (i>=97 && i<=122)
	{
	printf("%c\t",i);
	}
	else
	{
	printf("I AM NOT ALLOWED %c",i);

	}

}
getch();
}