/*
Name : Hitesh P Patel  Roll No: 999
TITLE: WAP for INPUT STATEMENTS SCANF, GETS, GETCH
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int srollno;
char sname[30], semail[30], scity[20];
double smob;
clrscr();

printf("PROGRAM FOR SCANNING AND PRINTING STUDENT DETAILS:\n\n");
printf("PLEASE ENTER NAME: ");
//scanf("%s",sname);
gets(sname);
printf("\nPLEASE ENTER YOUR MOBILE NUMBER: ");
scanf("%lf",&smob);
printf("\nPLEASE ENTER YOUR EMAIL ID: ");
scanf("%s",semail);
printf("\nPLEASE ENTER YOUR CITY: ");
scanf("%s",scity);


printf("\n STUDENT DETAILS : \n");
printf("\nSTUDENT NAME =  %s",sname);
printf("\nSTUDENT MOBILE =  %.0lf",smob);
printf("\nSTUDENT EMAIL =  %s",semail);
printf("\nSTUDENT CITY =  %s",scity);



getch();



}













