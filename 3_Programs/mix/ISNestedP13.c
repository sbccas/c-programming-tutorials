/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1*/
/*     13.  WAP to show demo of Nested For Loop for Pattern
1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1
*/
 
#include <stdio.h> 
#include <conio.h>
void main() 
{
    printf("Welcome to my Program. \nThis is Demo for For loop Statement\n");
    int  i,j,n;
    n = 5;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
            printf("\n");
    }
    printf("Good Bye Have a Nice Day....!!!!");
    
    }
