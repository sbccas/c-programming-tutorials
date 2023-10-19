/*DOCUMENTATION SECTION
PAP 80.1 WAP TO ENTER 10 NUMBERS AND FIND PRODUCT IN 1-D ARRAY:
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    //GET DATA IN ARRAY
system("cls");
int i,fybca7[10],product=1;
//FOR LOOP DATA COLLECT    
for(i=0;i<5;i++)
{
    printf("Enter ELEMENT AT fybca7[%d]",i);
    scanf("%d",&fybca7[i]);
}
for(i=0;i<5;i++)
{
    product = product * fybca7[i];
}
printf("PRODUCT OF ALL THE ELEMENTS OF ARRAY = %d",product);
//getch();
}




