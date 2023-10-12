#include<stdio.h>
#include<conio.h>
void main()

{
int i;
int fybca4[5];

	printf("Storing Data in 1-D Array:\n");
	for(i=0;i<5;i++)
	{
	printf("\tEnter Ele at %d:",i);
	scanf("%d",&fybca4[i]);
	}
	 printf("\nDISPLAYING CONTENTS OF ARRAY\n");
	 for (i=0;i<5;i++)
	 printf("fybca4[%d]=%d\t",i,fybca4[i]);


getch();
}
