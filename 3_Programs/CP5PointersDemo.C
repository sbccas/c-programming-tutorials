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
printf("Address of double d=%d, data=%lld\n",&d,d);

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
int *ptri; //Pointer to integer
float *ptrf; //Pointer to float
char *ptrc; //Pointer to char
long long *ptrl; //Pointer to long long
/*Initialization of pointers
Address-of Operator (&): To get the memory address of a variable, 
you use the & operator. 
For example: int x = 10; int *ptr = &x; 
sets the pointer ptr to hold the memory address of the variable x.*/
ptri = &i;
ptrf = &f;
ptrc = &c;
ptrl = &d;
printf("Address Data stored in ptri=%d\n",ptri);
printf("Address Data stored in ptrf=%f\n",ptrf);
printf("Address Data stored in ptrc=%c\n",ptrc);
printf("Address Data stored in ptrl=%lld\n",ptrl);
/*Dereferencing (*): To access the value a pointer is pointing to,
 you use the * operator. 
 For instance: int y = *ptr; would assign the value of x 
 (since ptr is pointing to x) to the variable y.
*/

}