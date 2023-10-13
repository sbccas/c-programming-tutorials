/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1*/
/*     11.  WAP to show demo of Nested For Loop
Print pattern with *
1
2 3
4 5 6
7 8 9 10
*/
 
#include <stdio.h> 
#include <conio.h>
void main() 
{   /*Greeting Message*/
    printf("Welcome to my Program. \nThis is Demo for For loop Statement\n");
   int i,j,rows, num =1;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
      for (i = 1; i <= rows; i++)
      {
          /* code */
          for (j = 1; j <= i; ++j)
          {
              /* code */
              printf("%d ",num);
              ++num;
        }
        printf("\n");

      }
      

   

    /* GoodBye Message*/
    printf("Good Bye Have a Nice Day....!!!!");
    
    }
