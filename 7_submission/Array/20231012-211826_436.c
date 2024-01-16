#include<stdio.h>
#include<conio.h>

 void main()
{
    int i,n,a[10];
    clrscr();
    printf("enter no");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
          printf("enter element a[%d]",i);
          scanf("%d",&a[i]);
          
    }
    for(i=0; i<n; i++)
    {
           printf("%d\n",a[i]);
    }       
    getch();
}          