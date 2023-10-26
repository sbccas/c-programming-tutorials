/* Title: WAP to Show Usage of String Functions 
   Programmer: Hitesh Patel Year/Div: FYBCA-1 RollNo: 999 
   Date: October 5, 2023
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int i;
char str1[10],str2[10];
Restart1:
printf("\nProgram to Show usage of String Functions:\n");
printf("Please Enter your Choice:\n");
printf("1. Find String Length (strlen() Function):\n");
printf("2. Concatenate(Combine) two Strings (strcat() Function):\n");
printf("3. Copy one String to Another String (strcpy() Function):\n");
printf("4. Compare two Strings (strcmp() Function):\n");
printf("5. Reverse the given String (strrev() Function):\n");
scanf("%d",&i);
switch (i)
{
case 1:
printf("1. Find String Length (strlen() Function):\n");
printf("Enter Your Name:\n");
scanf("%s",str1);
printf("Length of Your Name:%s = %d\n",str1,strlen(str1));
   break;
case 2:
printf("2. Concatenate(Combine) two Strings (strcat() Function):\n");
printf("Enter Your Name:\n");
scanf("%s",str1);
printf("Enter Your SurName:\n");
scanf("%s",str2);
printf("Your Full Name:= %s\n",strcat(str1,str2));
   break;
case 3:
printf("3. Copy one String to Another String (strcpy() Function):\n");
printf("Enter Your Name:\n");
scanf("%s",str1);
printf("Copied Your Name: %s to String2 = %s\n",str1,strcpy(str2,str1));
   break;
case 4:
printf("4. Compare two Strings (strcmp() Function):\n");
printf("Enter Any String1:\n");
scanf("%s",str1);
printf("Enter Any String2:\n");
scanf("%s",str2);
if (strcmp(str1,str2)==0)
printf("Both Strings are Same [%s = %s]= %d\n",str1,str2, strcmp(str1,str2));
else
printf("Both Strings are Different [%s NOT EQUAL %s] = %d\n",str1,str2, strcmp(str1,str2));
   
   break;
case 5:
printf("5. Reverse the given String (strrev() Function):\n");
printf("Enter Your Name:\n");
scanf("%s",str1);
printf("Reverse of Your Name: %s \n",strrev(str1));
   
   break;

default:
printf("Invalid Choice:\n");
   break;

}
goto Restart1;



}