/*
name:pipaliya avanik
roll no:701
title:program of 1-D numeric array(storing and printing)
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int i;
int fybca7[10]; // {1,3,5,7,9,11,13,15,17,19};
clrscr();
 
    /*
    fybca7[0]=1;
    fybca7[1]=3;
    fybca7[2]=5;
    fybca7[3]=7;
    fybca7[4]=9;
    fybca7[5]=11;
    fybca7[6]=13;
    fybca7[7]=15;
    fybca7[8]=17;
    fybca7[9]=19;
    */
    for(i=0;i<10;i++)
    {
      printf("\n enter number %d value is: ",i);
      scanf("%d",&fybca7[i]);
    }
    for(i=0;i<10;i++)
    
    printf("fybca7[%d]=%d\n",i,fybca7[i]);
    
 getch();
}