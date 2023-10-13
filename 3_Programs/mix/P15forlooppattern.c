/* Hitesh Patel Roll No: 999
WAP to demonstrate use of NESTED For Loop
 for Pattern Printing
1
12
123
1234
 12345
*/
#include <stdio.h>
#include <conio.h>
void main()
{
 int i,j;
 
 //clrscr();
  for(i=5;i>=1;i--)
 {
    for(j=1;j<=i;j++)
    {
        printf("%d",j);
    }
    printf("\n");
 }
 getch();
}
