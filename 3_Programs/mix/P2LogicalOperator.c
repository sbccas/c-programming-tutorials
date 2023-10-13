/* Hitesh Patel Roll No: 999
WAP to demonstrate use of LOGICAL Operators
*/
#include <stdio.h>
#include <conio.h>
#include <direct.h>
void main()
{
 
 int a,b,c;
 //clrscr();
 //system("cls");
 printf("ENTER VLAUSE OF A B C ");
 scanf("%d %d %d",&a,&b,&c);
/*USE OF LOGICAL OPERATORS
*/
// if(a>b && a>c)
//   printf("A IS MAX");
// else if(b>a && b >c)
//       printf("B IS MAX");
// else
// printf("C IS MAX");
//LOGICAL OR DEMO
 
if (a>=0 || b>=0)
// EITHER A S POSITIVE OF B IS POSITVE
printf("EITHER A IS POSITIVE OF B IS POSITVE");
else
printf("BOTH ARE NEGATIVE");
}