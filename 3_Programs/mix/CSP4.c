/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1*/
/*     4.  WAP to Read Marks and Display Grade according to the Following Criteria. (IF.... ELSE... LADDER ).  */
/*  100-80 , Distinction , 60-79 , First Class ,40-59 , Second Class , 0-39 , Fail   */
 
#include <stdio.h> 
void main() 
{

    int marks;
    printf("Enter Marks : ");
    scanf("%d",&marks);
    if(marks>=80 && marks<=100)
    {
        printf("Distinction");
    }
    else if(marks>=60 && marks<80)
    {
        printf("First Class");
    }
    else if(marks>=40 && marks<60)
    {
        printf("Second Class");
    }
    else if(marks >=0 && marks <40)
    {
        printf("Fail , Better Work Hard");
    }
    else
    {
        printf("Invalid Marks (Range: 0-100)");
    }
}
