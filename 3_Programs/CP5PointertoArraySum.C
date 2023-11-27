/* Title: WAP to show Elements using Pointers to Array and calculate its Sum. 
   Programmer: Hitesh Patel Year/Div: FYBCA-1 RollNo: 999 
   Date: October 5, 2023
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
system("cls");
int array[50];
int i,n,*ptrarray, sum=0;
ptrarray = array;
//Get size of Array and Enter Data in it.
printf("Enter Size for Array[]=");
scanf("%d",&n);
for (i = 0; i < n;i++)
{
printf("array[%d]=",i);
scanf("%d",ptrarray+i);
sum = sum + *(ptrarray+i);
}
//print array elements using pointer to array
printf("print array elements using pointer to array\n");
for (i = 0; i < n;i++)
{
printf("array[%d]=%d {ADDRESS:%d}\n",i,*(ptrarray+i),ptrarray+i);
}
printf("Sum of all Elements using pointer to array=%d\n",sum);
}