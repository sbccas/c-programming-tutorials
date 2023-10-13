#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[5],i,j,t;
printf("\n Enter any number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
 printf("\n Enter a[%d]=",i);
 scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++)
{
for(j=0;j<=n-i;j++)
{
if(a[j]<a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
for(i=0;i<n;i++)
{
 //printf("\n sorting variable is:");
 printf("\n a[%d]=%d",i,a[i]);
}
getch();
}
