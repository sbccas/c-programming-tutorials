/*DOCUMENTATION SECTION
PROGRAM TO SHOW DEMO OF SCANF FUNCTION
*/
#include <stdio.h>
#include <conio.h>
void main()
{
 int rollno;
 float percentage;
 char g,name[10],collegename[20];
 clrscr();
 printf("\nPlease Enter Roll No: ");
 scanf("%d",&rollno);
 printf("\nPlease Enter Name: ");
 scanf("%s",name);
 printf("\nPlease Enter Percentage: ");
 scanf("%f",&percentage);
 printf("\nPlease Enter Grade: ");
 g=getchar();
 printf("\nPlease Enter College Name: ");
 scanf("%s",collegename);
 printf("\n Personal Details of Students Entered are :\n");
 printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
 printf("\nROLL NO:- %d \nNAME:- %s\nPERCENTAGE:- %3.2f\nGRADE:- %c\nCOLLEGE:- %s\n",rollno,name,percentage,g,collegename);
 printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
// getch();

}