#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int fybca4[50];
clrscr();
printf("storing data in 1-D array:\n");
for(i=0;i<50;i++)
{
printf("\t enter elements at %d:",i);
scanf("%d",&fybca4[i]);
}
printf("\nDisplaying contents of array \n");
for(i=0;i<50;i++)
printf("fybca4[%d]=%d \t",i,fybca4[i]);
getch();
}