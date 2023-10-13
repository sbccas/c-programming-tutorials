/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1*/
/* 1 WAP TO SHOW DEMO OF NESTED FOR LOOP (HALF PYRAMID PATTERN PROGRAMS) */
/*     1
       2  3
       4  5  6
       7  8  9 10   */


#include <stdio.h>
#include <conio.h>
void main()
{
 int i, j ,n,p;
// clrscr();
 printf("\n How many Level of Pattern ?");
 scanf("%d",&n);
 p =1;
 for(i=1;i<=n;i++)
{  
    for(j=1;j<=i;j++)
    {
    printf("%d ",p);
    p++;
    }
printf("\n");
}
 getch();
}
