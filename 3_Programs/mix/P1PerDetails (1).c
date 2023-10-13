/* Hitesh Patel Roll No: 999
WAP to print Personal Details using Scanf().
1 NAME:
2 COURSE:
3 AGE:
4 CITY:
5 ICECREAM FLAVOUR: 
*/
#include <stdio.h>
void main()
{
    int age;
    char sname[20],scourse[20], scity[20], sicecream[30];
   printf("ENTER NAME \n"); 
    scanf("%s",sname);
   printf("ENTER COURSE \n"); 
    scanf("%s",scourse);
    printf("ENTER CITY \n"); 
    scanf("%s",scity);
   printf("ENTER AGE \n"); 
    scanf("%d",&age);
    printf("""ENTER FAV ICECREAM \n"); 
    scanf("%s",sicecream);
   printf("======== PERSONAL DETAILS =======");                                                                                                                               
   printf("\nYOUR NAME :  %s",sname);
   printf("\nYOUR COURSE :  %s",scourse);
   printf("\nYOUR AGE :  %d",age);
   printf("\nYOUR CITY :  %s",scity);
   printf("\nYOUR FAV ICECREAM :  %s",sicecream);
   printf("\n======== PERSONAL DETAILS =======");                                                                                                                               
   }   


