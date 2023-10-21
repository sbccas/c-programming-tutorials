/*DOCUMENTATION SECTION
PAP 86. WAP to Enter two array of size 5. Add these two array elements
and store in third array.(C = A + B) IN 1-D ARRAY:
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    system("cls");
    int i,arrayone[5],arraytwo[5],arraysum[5];
// arraysum[i]= arrayone[i] + arraytwo[i];
//GET DATA IN ARRAY ONE AND TWO
for(i=0;i<5;i++)
{
    printf("arrayone[%d]=\t",i);
    scanf("%d",&arrayone[i]);
}
for(i=0;i<5;i++)
{
    printf("arraytwo[%d]=\t",i);
    scanf("%d",&arraytwo[i]);
}
for(i=0;i<5;i++)
{
    arraysum[i] = arrayone[i] + arraytwo[i];
}
printf("\n FINAL OUTPUT OF SUM ARRAY: ");
printf("---------------------------------");
for(i=0;i<5;i++)
{
    printf("arraysum[%d]=%d\t",i,arraysum[i]);
    
}







}

