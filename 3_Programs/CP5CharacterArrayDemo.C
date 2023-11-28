/* Title: WAP to show Demo Character Array: 
   Programmer: Hitesh Patel Year/Div: FYBCA-1 RollNo: 999 
   Date: October 5, 2023
   CP5CharacterArrayDemo.C
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

int i;
system("cls");
//Take a Char Array
char carray3[10];// Declaration of a character array to hold up to 10 characters
char carray[10]={'A','M','R','O','L',' ','I','\0'}; // Declaration of a character array with 7 characters
char carray2[]="Hello";  // '\0' is automatically appended
printf("Character Array1: %s\n",carray); // Output : AMROL I
printf("Character Array2: %s\n",carray2);// Output : Hello
printf("Character Array3: %s\n",carray3);// Output :
// printf("Enter data in Character Array1: using scanf\n"); 
// scanf("%s",carray);

 printf("Enter data in Character Array2: using gets\n");
 gets(carray);
for (i = 0; i <=strlen(carray); i++)
{
 printf("%c \t %d \t",carray[i],carray[i]); 
}

// printf("UserData Array1=%s\n",carray);
// printf("UserData Array2=%s\n",carray2);
// printf("UserData Array3=%s\n",carray3);
// //printf("Address of carray1 %d\n",carray);
// //printf("Address of carray2 %d\n",carray2);
// //int roll= 414,l,m,n;
// //printf("Address of roll Variable= %d\n",&roll);
// //printf("Address of l Variable= %d\n",&l);
// //printf("Address of m Variable= %d\n",&m);
// //printf("Address of n Variable= %d\n",&n);
// // for(i=0;i<strlen(carray)+1;i++)
// // {
// //     printf("Element at %d = %c its ASCII= %d\n",i,carray[i],carray[i]);
// // }

// // for(i=0;i<strlen(carray2)+1;i++)
// // {
// //     printf("Element at %d = %c its ASCII= %d\n",i,carray2[i],carray2[i]);
// // }
}