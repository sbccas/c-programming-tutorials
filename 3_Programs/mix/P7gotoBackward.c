// example of backward jump
#include <stdio.h>
#include <conio.h>
int main()
{
 int i=1;
 //clrscr();
 x:
 if(i<=10)
 {
 printf("\n%d",i);
 i=i+1;
 goto x;
 }
 getch();
 return 0;
}
