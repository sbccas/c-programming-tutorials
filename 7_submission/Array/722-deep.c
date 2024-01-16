#include<stdio.h>
#include<conio.h>
void main()

{
int i;
int fybca7[5]; // {10,20,30,40,50};
    clrscr();
    
    /*
    fybca7[0]=20;
    fybca7[1]=40;
    fybca7[2]=10;
    fybca7[3]=80;
    fybca7[4]=90;
    */

	for(i=0;i<5;i++)
	{
	printf("\nEnter Element at %d value is - ",i);
	scanf("%d",&fybca7[i]);
	}
	
	 for (i=0;i<5;i++)
	 printf("fybca7[%d]=%d\n",i,fybca7[i]);


getch();
}
