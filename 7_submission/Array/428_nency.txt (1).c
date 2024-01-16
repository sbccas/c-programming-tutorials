# include <stdio.h>
# include <conio.h>
{
void main ()
int fybca4[100];
int n;
clrscr();

printf("storing data in 1-D array:\n");
        for(n=0;n<100;n++)
       {
            printf("\t ENTER ELEMENT AT %d:",n);
            scanf("%d",&fybca4[n]);
       }
   printf("\n DISPLAYING CONTENTS OF ARRAY\n"); 
        for(n=0;n<100;n++)
             printf("fybca4[%d]=%d\t",n,fybca4[n]);
             
    getch();
}