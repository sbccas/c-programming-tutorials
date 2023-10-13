/* Hitesh Patel Roll No: 999
WAP to demonstrate use of WHILE , DO...WHILE  and 
FOR LOOP for printing "HELLO" 10 Times 
*/
#include <stdio.h>
#include <conio.h>
void main()
{
 int i,j;
 i= 1;
 j=10;
 //while loop
 while(i<=j)
 {
     printf("HELLO USING WHILE\n");
     i = i+1;
 }
//do...while loop
 i =1;
 do
 {
     printf("HELLO USING DO WHILE\n");
     i = i+1;
 }while(i<=j);
//for loop
  for(i=1;i<=j;i++)
 {
    printf("HELLO USING FOR LOOP\n");
 }
 getch();
}
