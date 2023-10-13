/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1*/
/*     15.  WAP to show demo of break , continue Statement
*/
 
#include <stdio.h> 
#include <conio.h>
void main() 
{
    printf("Welcome to my Program. \nThis is Demo for For loop Statement\n");
    int  n,p=0,i;
    printf("Enter any Number");
    scanf("%d",&n);
    
    for (i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            p=1;
            break;
        }
        printf("TEST\n");
    }
    printf("\nTEST2\n");
    if(p==0)
    {
        printf("\n%d NUMBER IS PRIME",n);
    }
    else
    {
        printf("\n%d NUMBER IS NOT PRIME",n);
    }
    printf("\nGood Bye Have a Nice Day....!!!!");
    
    }
