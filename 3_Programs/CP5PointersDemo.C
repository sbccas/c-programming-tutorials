/* Title: WAP to show different types of pointers in C: 
   Programmer: Hitesh Patel Year/Div: FYBCA-1 RollNo: 999 
   Date: October 5, 2023
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
//Demo for creating pointers in C
system("cls");
int i=999;
float f=3.14;
char c='a';
long long d=9879879870;
printf("Address of int i=%d, data=%d\n",&i,i);
printf("Address of float f=%d, data=%f\n",&f,f);
printf("Address of char c=%d, data=%c\n",&c,c);
printf("Address of long long d=%d, data=%lld\n",&d,d);

//Print same output using Pointers
//Here comes pointers in Action:
/*Memory Address: Every variable in a computer program is stored
 in a specific memory location. 
 A pointer, instead of holding a typical value (like an integer or a character),
  holds the memory address of another variable.*/
/*Declaration: To declare a pointer in C, 
you use the asterisk (*) symbol before the variable name. 
For example: 
int *ptr; declares a pointer named ptr that can point to an integer.*/
int *ptrii; //Pointer to integer
int **ptrdo;//Pointer to pointer to integer
float *ptrff; //Pointer to float
char *ptrcc; //Pointer to char
long long *ptrll; //Pointer to long long
void *ptrv; // Void Pointer
/*Initialization of pointers
Address-of Operator (&): To get the memory address of a variable, 
you use the & operator. 
For example: int x = 10; int *ptr = &x; 
sets the pointer ptr to hold the memory address of the variable x.*/
ptrii = &i;
ptrff = &f;
ptrcc = &c;
ptrll = &d;
/*A void pointer is a pointer that has no associated data type with it.
A void pointer can hold address of any type and can be typcasted to any type.*/
ptrv = &i;
printf("Address Data stored in ptri=%d\n",ptrii);
printf("Address Data stored in ptrf=%d\n",ptrff);
printf("Address Data stored in ptrc=%d\n",ptrcc);
printf("Address Data stored in ptrl=%d\n",ptrll);
printf("Address Data stored in **ptrdo=%d\n",**ptrdo);
printf("Address Data stored in ptrv=%d\n",ptrv);
ptrv= &f;
printf("Address Data stored in ptrv=%d\n",ptrv);
/*Dereferencing (*): To access the value a pointer is pointing to,
 you use the * operator. 
 For instance: int y = *ptr; would assign the value of x 
 (since ptr is pointing to x) to the variable y.
*/
printf("Data pointed by ptrii = %d\n",*ptrii);
printf("Data pointed by ptrff = %f\n",*ptrff);
printf("Data pointed by ptrcc = %c\n",*ptrcc);
printf("Data pointed by ptrll = %lld\n",*ptrll);

}