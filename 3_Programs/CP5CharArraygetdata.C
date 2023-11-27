/* Title: WAP for getting characters from user and store in character array;  
   Programmer: Hitesh Patel Year/Div: FYBCA-1 RollNo: 999 
   Date: October 5, 2023
   CP5CharArraygetdata.C
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 system("cls");
int i=0,n;
bool flag=true;
char cname[100], userchar;
// //1 approach get user data as characters fixed size loop
// printf("Enter single characters of name[amrolibca] as input:\n");
// for (i = 0; i < 9; i++)
// {
//     scanf("\n%c",&cname[i]);
// }
// // terminating array with '\0' manually
// cname[i]= '\0';
// printf("Your created array of characters {String} = %s\n",cname);
// for (i = 0; i < 10; i++)
// {
//     printf("%d\t",cname[i]);
// }
//2 approach of getting characters until Enter is pressed 
printf("Enter characters -press Enter to finish:\n");
//Read characters until Enter is pressed
while ((userchar = getchar()) != '\n' && i < sizeof(cname) - 1) 
{
        cname[i++] = userchar;
        
}
    //3 approach using boolean flag.
    // while(flag)
    // {
    //    userchar=getchar();
    //    if(userchar=='\n'){
    //     flag = false;
    //    } 
    // cname[i++]=userchar;
    // }
// Null-terminate the character array
cname[i] = '\0';
// Display the character array
printf("Character array: %s\n", cname);
}
