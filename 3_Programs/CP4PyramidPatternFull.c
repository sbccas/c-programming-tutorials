#include <stdio.h>  
#include <conio.h>  
int main()  
{  
      
    int i, j, rows, k = 0;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows);   
      
    for ( i =1; i <= rows; i++)  
    {  
        for ( j = 1; j <= rows - i; j++)  
        {  
            printf (" ");   
        }  
      
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("*"); 
        }  
        printf ("\n");  
    }  
    getch();  
}  