#include<stdio.h>
#include<conio.h>
void main()
{
/*
int i;
clrscr();
printf("\n\n");
	for (i=48;i<=122;i++)
	{
	if ((i>=58 && i<=64) || (i>=91 && i<=96))
	{
	continue;
	}
	printf("%c\t",i);

	}
//
/*
int i;
clrscr();
for (i=48;i<=122;i++)
{
	if(i>=58 && i<=64)
	{
	continue;
	}
	if(i>=91 && i<=96)
	{
	continue;
	}
	printf("%c\t",i);
}
*/
//CHECKING INPUTTED CHARACTER

char c;
clrscr();
printf("PLEASE ENTER YOUR CHARACTER:\t");
scanf("%c",&c);
// CHECK THE RANGE FOR CHARCETER
	if (c>='A'&& c<='Z')
	printf("\nYOUR INPUT DATA IS CAPITAL ALPHABET: %c",c);
	else if (c>='a'&& c<='z')
	printf("\nYOUR INPUT DATA IS SMALL CASE  ALPHABET: %c",c);
	else if (c>='0' && c<='9')
	printf("\nYOUR INPUT DATA IS NUMBER: %c",c);
	else
	printf("\nSPECIAL SYMBOL :  %c",c);
getch();
}





