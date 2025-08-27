/*
Name : Hitesh P Patel  Roll No: 999
TITLE: WAP for Printing Personal Details using SCANF
*/
#include<stdio.h>
#include<conio.h>
int main()
{
char sname[30], sclass[10];
char sc;
int sroll;
double smob;
clrscr();
printf("\n\nPROGRAM FOR PERSONAL DETAILS:\n");
printf("PLEASE ENTER YOUR FULL NAME :");
//scanf("%s",sname);
//gets(sname);
sc = getchar();
//sc = getche();
//printf("PLEASE ENTER YOUR CLASS :");
//gets(sclass);
//printf("PLEASE ENTER YOUR ROLL NO :");
//scanf("%d",&sroll);
//printf("PLEASE ENTER YOUR MOBILE :");
//scanf("%Lf",&smob);

printf("\n\t\tYOUR PERSONAL DETAILS ARE :\n");
printf("\nSNAME\t = %c\n",sc);

//printf("SNAME\t = %s\n",sname);
//printf("SNAME\t = %s\n",sname);



getch();
return 0 ;
}













