#include<stdio.h>
#include<conio.h>
int main()
{
int i,sum,fybca8[5]={0};
sum=0;
//clrscr();
	printf("STORING DATA IN 1-D ARRAY:\n");
	for(i=0;i<5;i++)
	{
	printf("Please Enter your Data FYBCA8[%d]: \t",i);
	scanf(" %d",&fybca8[i]);
	}
	printf("Data Stored Success\n");
	printf("\nSUM OF ALL THE ELEMENTS IN 1-D ARRAY:\n");
	for(i=0;i<5;i++)
	sum = sum + fybca8[i];
	
	printf("SUM OF ALL ELEMENTS OF fybca8=%d\t",sum);
return 0;
//getch();
}