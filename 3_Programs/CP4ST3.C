#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,n,l;
n=8;
//clrscr();
for (i=1;i<=n;i++)
{
	for(j=8;j>=i;j--)
	{
	printf(" ");
	}
	for(k=1;k<=i;k++)
	{ printf("@");
	}
	for(l=1;l<i;l++)
	{
	printf("@");
	}

       printf("\n");
}
//getch();

}
