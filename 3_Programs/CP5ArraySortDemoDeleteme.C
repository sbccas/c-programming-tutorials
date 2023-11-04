#include<stdio.h>
int main()
{
int fybca4[50]= {456,474,464,444,428};
int i,j,n =5, temp;
//PRINT UNSORTED ARRAY: 
printf("UNSORTED ARRAY =\n");
for (i =0;i<5;i++)
printf("| %d |",fybca4[i]);

//IMPLEMENTING BUBBLE SORT
for(i=0;i < n-1 ;i++)
{
    for(j = 0; j < n-1 -i; j++)
    {
          //check adjacent elements if left is greater than right than swap
          if(fybca4[j] > fybca4[j+1])  
          {
            //swapping
                temp = fybca4[j];
                fybca4[j] = fybca4[j+1] ;
                fybca4[j+1] = temp;
          }

    }
}
//printing sorted array
printf("\nSORTED ARRAY =\n");
for (i =0;i<5;i++)
printf("| %d |",fybca4[i]);


}

