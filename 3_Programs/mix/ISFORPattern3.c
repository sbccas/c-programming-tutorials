/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1*/
/* 1 WAP TO SHOW DEMO OF NESTED FOR LOOP (HALF PYRAMID PATTERN PROGRAMS) */
/*     A
       B  C
       D  E  F
       G  H  I  J   */


#include <stdio.h>
#include <conio.h>
void main()
{
 int i, j ,n,p;
 char c;
// clrscr();
 printf("\n How many Level of Pattern ?");
 scanf("%d",&n);
 c= 'A';
 for(i=1;i<=n;i++)
{  
    for(j=1;j<=i;j++)
    {
    printf("%c ",c);
    c++;
    }
printf("\n");
}
 getch();
}
