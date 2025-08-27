/*
TITLE : WAP TO SHOW DEMO OF GOTO SATEMENT IN FORWARD AND BACKWARD JUMP
YEAR:
DIV:
ROLL;

*/
#include<stdio.h>
#include<conio.h>
int main()
{
//clrscr();
int i;
clrscr();
i = 10;
reverse:
if (i<20)
{
printf("WELCOME TO MY PROGRAM:\n");
printf("THIS IS DEMO OF BACKWARD JUMP:\n");
printf("VALUE OF I IS = %d",i);
i = i +1;
goto reverse;
}
printf("VALUE OF I IS = %d",i);


getch();
return 0;
}