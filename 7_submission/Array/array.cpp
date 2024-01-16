/*remark
name: Dabhoya hitesh
roll no:708
title:wap to show of 1 d array:
*/
#include<conio.h>
int main()
{
int hitesh[10],i;
clrscr();
printf("program to store data in array:\n");
for(i=0;i<10;i++)
    {    
        printf("please enter element for hitesh[%d]",i);
        scanf("%d",&hitesh[i]);
    }
printf("displaying stored data in array:\n");
    for(i=0;i<10;i++)  
    {
        printf("element at hitesh[%d]\n",i,hitesh[i]);
    }
getch();
}