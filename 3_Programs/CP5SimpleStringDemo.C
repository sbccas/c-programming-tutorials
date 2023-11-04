/* Title: WAP to show Demo String Operations: 
   Programmer: Hitesh Patel Year/Div: FYBCA-1 RollNo: 999 
   Date: October 5, 2023
*/
#include<stdio.h>
#include<string.h>
int main()
{
int i;
char str1[12]= {'h','e','l','l','o',' ','w','o','r','l','d','\0'};
char str2[12];
char sname[] = "hitesh";
printf("My name is : %s\n", sname);
//printf("Enter New String :");
//scanf("%s",sname);
printf("New String is : %s\n", sname);

for (i = 0; i <= strlen(sname); i++)
{
    printf("%c\t",sname[i]);
}
printf("\nStr1 : %s\n", str1);
//printf("Reverse Using Function [strrev] = %s",strrev(str1));
printf("Reverse Without Using Function [strrev] \n");
for (i = strlen(str1); i >= 0; i--)
{
    printf("%c\t",str1[i]);
}
//printf("\nNew String is : %d\n", str1);

}