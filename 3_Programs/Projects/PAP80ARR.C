/*DOCUMENTATION SECTION
PAP 80.WAP TO FIND THE SUM OF ALL THE ELEMENTS OF 1-D ARRAY:
*/
#include <stdio.h>
#include <conio.h>
void main()
{
int fybca4[10],sum=0,i;
clrscr();
printf("PROGRAM TO STORE DATA IN ARRAY:\n");
	for(i=0;i<10;i++)
	{
	printf("\nPlease Enter Element for fybca4[%d]= ",i);
	scanf("%d",&fybca4[i]);
	}

for(i=0;i<10;i++)
{
 sum += fybca4[i];
 }
 printf("Sum of all element is %d.",sum);
getch();


}                
