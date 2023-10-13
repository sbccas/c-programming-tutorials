#include<stdio.h>
#include<conio.h>
void main()

{
int n,i;
int fybca4[1];
printf("Please Enter Size of Array:\n");
scanf("%d",&n);
fybca4[n];


	printf("Storing Data in 1-D Array:\n");
	for(i=0;i<n;i++)
	{
	printf("\tEnter Ele at %d:",i);
	scanf("%d",&fybca4[i]);
	}
	 printf("\nDISPLAYING CONTENTS OF ARRAY\n");
	 for (i=0;i<n;i++)
	 printf("fybca4[%d]=%d\t",i,fybca4[i]);


getch();
}