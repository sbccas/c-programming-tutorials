#include<stdio.h>
#include<conio.h>
void main ()
{
 int fybca4[50];
 int i ;
 clrscr();
   printf("storing data in 1-D array:\n");
   for(i=0;i<5;i++)
   {
        printf("enter element at :%d\t",i);
        scanf("%d",&fybca4[i]);
   }     
       printf("\n displaying contents of array \n");
       for(i=0;i<50;i++)
       printf("fybca4[%d]=%d \t",i,fybca4[i]);
    
getch();
}    