/* Title: WAP FOR CHARACTER ARRAY 
   Programmer: Hitesh Patel Year/Div: FYBCA-1 RollNo: 999 
   Date: October 5, 2023
*/
#include<stdio.h>
#include<conio.h>
int main()
{
 //declaring character array
 int i=0,a=0;
 char s;
 char sname[10] = {'A','M','R','O','L','I','B','C','A','\0'};
 char sname2[10];
printf("String1 Data= %d\n",sname);
printf("Enter String2 Data\n");
gets(sname2);
printf("\nEnter Character to Search Data\n");
scanf("%c",&s);

//FORLOOP
printf("OUTPUT USING FOR LOOP\n");
for (i = 0; i < 10; i++)
{
    if(sname2[i]==s)
    {
        a++;
    }
    else{
        printf("%c",sname2[i]);
    }
}
printf("\nTOTAL '%c' in your name 2 = %d\n",s,a);

}