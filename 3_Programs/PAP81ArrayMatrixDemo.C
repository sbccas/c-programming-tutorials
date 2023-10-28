/* Title: Enter 3 X 3 matrix using one dimension array and print 3 X 3 matrix on screen.: 
   Programmer: Hitesh Patel Year/Div: FYBCA-1 RollNo: 999 
   Date: October 5, 2023
*/

#include<stdio.h>
#include<conio.h>
int main()
{
int fybca4[9]={0},i,j,k=0;
for (i = 0; i < 9; i++)
{
    printf("\nEnter Data for fybca4[%d]:\t",i);
    scanf("%d",&fybca4[i]);
}

printf("-------------------------\n");
for(i=0;i<3;i++)
{
for ( j = 0; j < 3; j++)
{
    printf("%d\t",fybca4[k]);
    k++;
}
printf("\n");
}
printf("|\n-------------------------");
}

