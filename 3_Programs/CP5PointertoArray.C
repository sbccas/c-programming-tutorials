/* Title: WAP to show Pointers to Array in C: 
   Programmer: Hitesh Patel Year/Div: FYBCA-1 RollNo: 999 
   Date: October 5, 2023
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
system("cls");
int i,j,array[5]= {100,200,300,400,500};
int *ptria;// Declared Pointer to Array
ptria= array;// Initialized pointer to Array
//ptria= &array[0];//Initialized pointer to First Element of Array
printf("Address of Array=%d\n",array);
printf("Address Stored in Pointer to Array=%d\n",ptria);
//ptria++;
//printf("Address Stored in Pointer to Array=%d\n",ptria);
//for loop to print address of array locations
printf("for loop to print address of array locations\n");
for (i = 0; i < 5; i++)
{
    printf("array[%d]=%d\t",i,&array[i]);
}
//for loop to print address using pointer to array 
printf("\nfor loop to print address using pointer to array\n");
for (i = 0; i < 5; i++)
{
    printf("array[%d]=%d\t",i,ptria+i);
}
//we can calculate address of an element 
//using its index and scale factor of its datatype using pointer to array;
//get address of array[5] = pointer to array (base address) + (index X scale factor of datatype)
//address of array[5] = ptria + (5*sizeof(array));
printf("address for array[5]= %d",ptria + (4));

}