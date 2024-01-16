#include<stdio.h>
#include<conio.h>
void main()
{
int  fybca4[10];
int i;
clrscr();
     printf("programe of 1-d array:\n");
     for(i=0;i<10;i++)
     {
       printf("enter element at %d\t",i);
       scanf("%d",&fybca4[i]);
     }
      printf("\n display conatent of array");
      for(i=0;i<10;i++)
      printf("fybca4[%d]=%d\t",i,fybca4[i]);
getch();        
}
    