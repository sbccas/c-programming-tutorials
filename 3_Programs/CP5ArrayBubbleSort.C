#include <stdio.h>
#include <conio.h>
int main()
{
    int n, i, j, array[50], temp;
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
    printf("\nApplying Bubble Sorting : \n");
    // CHECKING ELEMENTS AND SWAPPING IF ELEMENT IS GREATED THAN SECOND ELEMENT:
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-1-i; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
        printf("\nArray Elements after Bubble Sorting : \n");
        for (i = 0; i < n; i++)
        {
            printf("array[%d]= %d ", i, array[i]);
        }
    
}