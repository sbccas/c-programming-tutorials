#include<stdio.h>
#include<conio.h>
void main()
{
int i=1234;
int rev , res;
rev =0;
res=0;
clrscr();
//GET LAST DIGIT
     amroli:
     if (i%10>0)
     {
     res=i % 10;   //1234  >>>> 4
     printf("%d",res);
     rev =    res +  rev*10;
     printf("Live Reverse NUmber:  %d",rev);
     i = i/10;    //1234  /10 --->> 123,  12,  1  ,  0.1  --> 0
     goto amroli;
      }

getch();
}