/* name: solanki Hetavi
roll no : 459
title:wap to storing and display 1-D numeric array*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
int fybca4[0];
printf("\n please enter size of array");
scanf("%d",&n);

clrscr();
printf("storing data in 1-D array:\n");
for(i=0;i<n;i++)
{
printf("\t enter elements at %d:",i);
scanf("%d",&fybca4[i]);
}
printf("Displaying contents of array \n");
for(i=0;i<n;i++)
printf("fybca4[%d]=%d \t",i,fybca4[i]);
}