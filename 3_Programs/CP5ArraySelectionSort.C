/* Title: WAP FOR SELECTION SORT WITH 1-D ARRAY 
   Programmer: Hitesh Patel Year/Div: FYBCA-1 RollNo: 999 
   Date: October 5, 2023
*/
#include<stdio.h>
#include<conio.h>
int main()
{
  int n, i, j,k, array[50], sml,temp;
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
        // Find the minimum element in unsorted array
        sml = i;
        for ( j = i+1; j < n; j++)
        {
            if (array[j]<array[sml])
            {
                sml = j;
            }
        }
        // Swap the found minimum element with the first element       
        if (sml!=i)
            {
            temp = array[i];
            array[i] = array[sml] ;
            array[sml] = temp;
            }
        printf("\n");
        for (k = 0; k < n; k++)
        {
            printf("%d\t",array[k]);
        }

          

      }
         printf("\nArray Elements after Selection Sorting : \n");
        for (i = 0; i < n; i++)
        {
            printf("array[%d]= %d ", i, array[i]);
        }
    
    
    
}

