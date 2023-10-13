/* Hitesh Patel Roll No: 999
WAP to demonstrate use of SWITCH Case Statement
PRINT ABCD ALPHABETS 
*/

#include <stdio.h>
#include <conio.h>
void main()
{
 char alpha;
 //clrscr();
 printf("\n Please Enter Any Alphabet: ");
 scanf("%c",&alpha);
 switch(alpha)
 {
case 'A':
printf("\n A for Apple");
break;
case 'B':
printf("\n B for Bat");
break;
case 'C':
printf("\n C for Cat");
break;
case 'D':
printf("\n D for Dog");
break;
case 'E':
printf("\n E for Elephant");
break;
case 'F':
printf("\n F for Fish");
break;
case 'G':
printf("\n G for Goat");
break;

default:
 printf("\n ENTER ANY ALPHABET FROM A to Z");
 break;
}
 getch();
 }
