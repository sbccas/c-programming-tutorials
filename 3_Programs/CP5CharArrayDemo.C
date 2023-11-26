/* Title: WAP FOR CHARACTER ARRAY 
   Programmer: Hitesh Patel Year/Div: FYBCA-1 RollNo: 999 
   Date: October 5, 2023
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 system("cls");
 int i=0,counter=0;
 char search;
 char sname[10] = {'A','M','R','O','L','I','B','C','A','\0'};//declaring character array
 char sname2[10];//declaring character array
printf("String1 Data= %s\n",sname);
printf("Enter String2 Data\n");
gets(sname2);
printf("\nEnter Character to Search Data\n");
scanf("%c",&search);

printf("OUTPUT USING FOR LOOP\n");//FORLOOP
for (i = 0; i < 10; i++)
{
    if(sname2[i]==search)
    {
        counter++;
    }
    else{
        printf("%c",sname2[i]);
    }
}
printf("\nTOTAL '%c' in your name2 = %d\n",search,counter);

}