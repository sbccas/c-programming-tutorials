/*  REMARK
Name: Hitesh Patel Roll No: 999
Title: WAP for PRINTING HELLO 10 TIMES USING LOOPING
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,n=0;
clrscr();
printf("HOW MANY TIME DO YOU EW+WANT TO PRINT HELLO:\n");
scanf("%d",&n);
//PRINTING HELLO USING FOR LOOP
printf("PRINTING HELLO USING FOR LOOP\n");
for(i=1;i<=n;i++)
 printf("%d Hello \t",i);
//PRINTING HELLO USING WHILE LOOP
printf("\nPRINTING HELLO USING WHILE LOOP\n");
i=1;
while(i<=n)
{ printf("%d Hello \t",i);
 i++;
}
//PRINTING HELLO USING DO...WHILE LOOP
printf("\nPRINTING HELLO USING DO...WHILE LOOP\n");
i=1;
do{
 printf("%d Hello \t",i);
 i++;
}while(i<=n);
//PRINTING HELLO USING GOTO STATEMENT
printf("\nPRINTING HELLO USING GOTO STATEMENT\n");
i=1;
amroli:
     if(i<=n)
     {
     printf("%d Hello \t",i);
     i++;
     goto amroli;
     }
getch();
}







