
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,l;
l=5;
//char c='Z';
clrscr();
	printf("\t\t\t\PATTERNS\t\t\t\n");
	printf("PATTERN 1===================================\n");
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf(" ");
		}
		for(k=5;k>=i;k--)
		{
		printf("*");
		}
		printf("\n");
	}


	printf("PATTERN 2===================================\n");
	for(i=1;i<=l;i++)
	{
	for(j=1;j<=i;j++)
	{
	printf("@");
	}
	for(k=l-i+1;k>0;k--)
	{
	printf("*");
	}
		printf("\n");
	}


	printf("PATTERN 3===================================\n");
for(i=5;i>=1;i--)
{
 for (j=i;j>=1;j--)
 {
 printf("* ");
 }
 printf("\n");
}





getch();
}