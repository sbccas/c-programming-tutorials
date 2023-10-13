/* Hitesh Patel Roll No: 999
WAP to demonstrate use of GOTO Statement
FORWARD JUMP DEMO
*/
#include <stdio.h>
#include <conio.h>
int main()
{
  system("CLS");
  int i = 0;
      
    AMROLI:

    i = i +1;
    
    printf("THIS IS DEMO OF FORWARD JUMP");
    printf("=============================");   
    printf("THIS IS LINE NUMBER 1\n");
    printf("THIS IS LINE NUMBER 2\n");
    printf("THIS IS LINE NUMBER 3\n");
    printf("THIS IS LINE NUMBER 4\n");
    printf("THIS IS LINE NUMBER 5\n");
    if (i <5)
    goto AMROLI;
    else
    printf("THIS IS LINE NUMBER 6\n");
    printf("THIS IS LINE NUMBER 7\n");
    printf("THIS IS LINE NUMBER 8\n");
    printf("THIS IS LINE NUMBER 9\n");
    printf("THIS IS LINE NUMBER 10\n");
 //getch();
 }
