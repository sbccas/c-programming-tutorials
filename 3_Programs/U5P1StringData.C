/* Title: WAP to show Demo of Character Array: 
   Programmer: Hitesh Patel Year/Div: MSCIT Sem-1 RollNo: 999 
   Date: November 17, 2025
   U5P1StringData.C
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
    char a3[20]= {'H','i',' ','T','h','e','r','e','\0'};
    char a1[10];
    char a2[14]="HelloWorld123";
    
    printf("Enter a string ");
    gets(a1);   
    printf("String a1: %s\n",a1);
    printf("String a2: %s\n",a2);
    printf("String a3: %s\n",a3);   
    
    printf("Length of String a1: %d\n",strlen(a1));
    printf("Length of String a2: %d\n",strlen(a2));
    printf("Length of String a3: %d\n",strlen(a3));

    return 0;
}

