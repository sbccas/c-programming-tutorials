#include <stdio.h>
#include <conio.h>
void showdata();
int array[50];
int k,l,n,m;
int main()
{
    int i=0,j=0,temp=0;
    printf("\nEnter Size for an Array (< 50): ");
    scanf("%d", &n);
    m=n;
    for (i = 0; i < n; i++)
    {
        printf("Enter Element array[%d]= ", i);
        scanf("%d", &array[i]);
    }
    printf("\nInputed Array:\t");
    showdata();
    printf("\nApplying Bubble Sorting : \n");
    // CHECKING ELEMENTS AND SWAPPING IF ELEMENT IS GREATED THAN SECOND ELEMENT:
    for (i = 0; i < n ; i++)
    {
        printf("\nPass %d, i=%d\t",i+1,i);
        showdata();
        for (j = 0; j < n-1-i; j++)
        {
            printf("\tj=%d,j+1=%d \t",j,j+1);
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                printf(" SWAPPED");
            }
            else{printf(" NO SWAP");}
            printf("\n\t\t");
        showdata();
        }             

    }
        printf("\nArray Elements after Bubble Sorting : \n");
        showdata();
    
}
void showdata()
{
for (k = 0; k < n; k++)
        {
            printf("| %d ",array[k]);
        }
        printf("|");
       // return;
}