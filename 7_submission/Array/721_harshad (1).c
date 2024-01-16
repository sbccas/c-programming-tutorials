/*remark
name = jethva harshad kantibhai
class = fybca    div = 7       roll no = 721
title = write a program array using scanf function
*/
#include<stdio.h>
#include<conio.h>

void main()

{
    int i,harshad21[10];
    clrscr();
    printf("program to store data in array : \n");
    for(i=0; i<10; i++)
    {
        printf("\n please enter element for harshad21[%d]:",i);
        scanf("%d",&harshad21[i]);
    }
    
    printf("display store data in array :\n ");
    
    for(i=0; i<10; i++)
    {
        printf("element at harshad21[%d]=%d \n",i,harshad21[i]);
    }
    getch();

}

output:-

program to store data in array :

 please enter element for harshad21[0]:1

 please enter element for harshad21[1]:2

 please enter element for harshad21[2]:3

 please enter element for harshad21[3]:4

 please enter element for harshad21[4]:5

 please enter element for harshad21[5]:6

 please enter element for harshad21[6]:7

 please enter element for harshad21[7]:8

 please enter element for harshad21[8]:9

 please enter element for harshad21[9]:0
display store data in array :
 element at harshad21[0]=1
element at harshad21[1]=2
element at harshad21[2]=3
element at harshad21[3]=4
element at harshad21[4]=5
element at harshad21[5]=6
element at harshad21[6]=7
element at harshad21[7]=8
element at harshad21[8]=9
element at harshad21[9]=0

[Process completed (code 10) - press Enter]