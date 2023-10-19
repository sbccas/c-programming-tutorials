/*DOCUMENTATION SECTION
PAP 80.WAP TO ENTER 10 NUMBERS AND PERFORM SUM IN 1-D ARRAY:
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    //GET DATA IN ARRAY
system("cls");
int i,fybca7[10],sum=0;
//FOR LOOP DATA COLLECT    
for(i=0;i<5;i++)
{
    printf("Enter ELEMENT AT fybca7[%d]",i);
    scanf("%d",&fybca7[i]);
}
for(i=0;i<10;i++)
{
    sum = sum + fybca7[i];
}
printf("SUM OF ALL THE ELEMENTS OF ARRAY = %d",sum);
//getch();
}




