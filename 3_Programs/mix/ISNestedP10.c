/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1*/
/*     10.  WAP to show demo of Nested For Loop
Print pattern with *
*
**
***
****
*/
 
#include <stdio.h> 
#include <conio.h>
void main() 
{
    printf("Welcome to my Program. \nThis is Demo for For loop Statement\n");
    int i,j,n=0;
    printf("Please Enter the Height of your pattern :");
    scanf("%d",&n);
    /*this is outer loop*/
    for(i=1;i<=n;i++)
    {   
        /*this is inner loop*/
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");

    }



    printf("Good Bye Have a Nice Day....!!!!");
    
    }
