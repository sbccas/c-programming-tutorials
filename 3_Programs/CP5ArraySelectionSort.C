/* Title: WAP FOR SELECTION SORT WITH 1-D ARRAY 
   Programmer: Hitesh Patel Year/Div: FYBCA-1 RollNo: 999 
   Date: October 5, 2023
*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int n, i, j, array[50], sml,temp;
    printf("\nEnter Size for an Array (< 50): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Element for array[%d]= ", i);
        scanf("%d", &array[i]);
    }
    printf("\nElements of Inputed Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("array[%d]= %d ", i, array[i]);
    }
    printf("\nApplying Selection Sorting...........!!!");
    // CHECKING ELEMENTS AND SWAPPING IF ELEMENT IS SMALLER THAN SECOND ELEMENT:
    for (i = 0; i < n-1; i++)
    {
        sml = i;
        for ( j = i+1; j < n; j++)
        {
            if (array[j]<array[sml]){
                sml = j;
            }
            temp = array[i];
            array[i] = array[sml] ;
            array[sml] = temp;
        }
      }
         printf("\nArray Elements after Selection Sorting : \n");
        for (i = 0; i < n; i++)
        {
            printf("array[%d]= %d ", i, array[i]);
        }
    
    
    
}

