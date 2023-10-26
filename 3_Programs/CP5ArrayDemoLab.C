/* Title: WAP to show Demo of 1-D Array: 
   Programmer: Hitesh Patel Year/Div: FYBCA-1 RollNo: 999 
   Date: October 5, 2023
*/

#include<stdio.h>
#include<conio.h>
int main()
{
int fybca4[80]={0},i;
for (i = 0; i < 5; i++)
{
    printf("\nEnter Data for fybca4[%d]:\t",i);
    scanf("%d",&fybca4[i]);
}

printf("-------------------------\n");
for(i=0;i<5;i++)
{
printf("| %d ",fybca4[i]);
}
printf("|\n-------------------------");


}