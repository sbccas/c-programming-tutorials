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
char carray3[100];// Declaration of a character array to hold up to 10 characters
char carray[100]={'A','M','R','O','L',' ','I','\0'}; // Declaration of a character array with 7 characters
char carray2[]="Hello";  // '\0' is automatically appended
char amr0[]="";
char amr[10],amr2[10];
char amr3[]="Hitesh";
printf("Character Array1: %s\n",carray); // Output : AMROL I
printf("Character Array2: %s\n",carray2);// Output : Hello
printf("Character Array3: %s\n",carray3);// Output :  
// printf("Enter data in Character Array1: using scanf\n"); 
// scanf("%s",carray);
// printf("YOUR DATA : %s\n",carray);
// printf("Enter data in Character Array3: using scanf\n");
// scanf("%s",carray3);
// printf("YOUR DATA : %s\n",carray3);

 printf("Enter data in Character Array1: using gets\n");
 gets(carray);
 printf("Enter data in Character Array3: using gets\n");
 gets(carray3);
printf("DATA CARRAY = %s\n",carray);
printf("DATA CARRAY3= %s\n",carray3);

// for (i = 0; i <strlen(carray); i++)
// {
//  printf("%c \t %d \n",carray[i],carray[i]); 
// }

for(i=0;i<100;i++)
{
 if (carray[i]=='\0')
   {
    break;  
   }
    else
    {
       printf("%c \t %d \n",carray[i],carray[i]); 
     }
}


printf("\nUserData Array1=%s\n",carray);
printf("UserData Array2=%s\n",carray2);
printf("UserData Array3=%s\n",carray3);
printf("Enter data in AMR Array1: using gets\n");
 gets(amr);
 printf("Enter data in AMR Array2: using gets\n");
 gets(amr2);
printf("Address of carray0 %d\n",amr0);
 printf("Address of carray1 %d\n",amr);
printf("Address of carray2 %d\n",amr2);
printf("Address of carray3 %d\n",amr3);
int roll= 414,l,m,n;
printf("Address of roll Variable= %d\n",&roll);
printf("Address of l Variable= %d\n",&l);
printf("Address of m Variable= %d\n",&m);
printf("Address of n Variable= %d\n",&n);
// for(i=0;i<strlen(carray)+1;i++)
// {
//     printf("Element at %d = %c its ASCII= %d\n",i,carray[i],carray[i]);
// }

// for(i=0;i<strlen(carray2)+1;i++)
// {
//     printf("Element at %d = %c its ASCII= %d\n",i,carray2[i],carray2[i]);
// }
}