/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1*/
/*     16.  WAP to show demo of break , continue Statement
        FIND ODD NUMBERS:
*/
 
#include <stdio.h> 
#include <conio.h>
void main() 
{
    printf("Welcome to my Program. \nThis is Demo for For loop Statement\n");
    int  n,i;
    printf("Enter any Number");
    scanf("%d",&n);
    
    for (i=1;i<=n;i++)
    {
        if(i%2==0)
                   continue;        
                printf("%d\n",i);
    }
    
    printf("\nGood Bye Have a Nice Day....!!!!");
    
    }
