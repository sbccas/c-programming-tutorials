/*
name  : vadhvana Abhay b.
roll  : 781
tittle: enter number and display 
*/

#include<stdio.h>
#include<conio.h>
void main()

{
int i;
int fybca7[10];//{10,20,30,40,50,60,70,80,90,99};
    clrscr();
    
    /*
    fybca7[0]=10;
    fybca7[1]=20;
    fybca7[2]=30;
    fybca7[3]=40;
    fybca7[4]=50;
    fybca7[4]=60;
    fybca7[4]=70;
    fybca7[4]=80;
    fybca7[4]=90;
    fybca7[4]=99;
    */

	for(i=0;i<10;i++)
	{
	printf("\nEnter Element at %d value is - ",i);
	scanf("%d",&fybca7[i]);
	}
	
	 for (i=0;i<10;i++)
	 printf("fybca7[%d]=%d\n",i,fybca7[i]);


getch();
}
    