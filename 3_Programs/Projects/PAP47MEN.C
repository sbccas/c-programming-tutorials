/*  REMARK
Name: Hitesh Patel Roll No: 999
Title: WAP for PRINTING TABLE USING MENU
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int choice,i,j,n;
clrscr();
amroli:
printf("\nPlease Enter Your Choice:\n");
printf("1. PRINT TABLE OF ANY ONE NUMBER(n):\n");
printf("2. PRINT TABLE UPTO ANY NUMBER(n):\n");
printf("3. EXIT:\n");
scanf("%d",&choice);
switch(choice)
{
  case 1:

       printf("Enter Your Number:");
       scanf("%d",&j);
       //TABLE OF 1
       // 1 X 1 = 1
       // 1 X 10 = 10
	printf("TABLE OF %d\n",j);
	for(i=1;i<=10;i++)
	printf("%d X %d = %d\n",j,i,i*j);
       goto amroli;
  case 2:

       printf("Enter upto Table Number:");
       scanf("%d",&n);
       for(i=1;i<=n;i++)
       {
	printf("TABLE OF %d\n",i);
	for(j=1;j<=10;j++)
	{
		printf("%d X %d = %d\n",i,j,i*j);
	}
       }
   goto amroli;
   case 3:
     printf("EXCELLENT CHOICE\n");
    break;

   default:
     {
     printf("INVALID CHOICE: CHOOSE AGAIN\n");
     goto amroli;
     }
}
getch();
}







