/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1*/
/* 1 WAP TO SHOW DEMO OF NESTED FOR LOOP (HALF PYRAMID PATTERN PROGRAMS) */

#include <stdio.h>
#include <conio.h>
void main()
{
 int i, j ,n;
// clrscr();
 printf("\n How many Level of Pattern ?");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
{  
    for(j=1;j<=i;j++)
    {
    printf("%d",j);
    }
printf("\n");
}
 getch();
}
