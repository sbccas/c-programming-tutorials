#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    clrscr();
    for(i=1;i<=100;i++)
    {
    if(i==53)
    {
    continue;
    }
    printf("number : %d" ,i);
    }  
    printf("\n");
    while (i<100)
    {
    i++;
    if(i==53) 
    {
    continue;
    }
    printf(" number : %d",i);
    }
     getch();
}