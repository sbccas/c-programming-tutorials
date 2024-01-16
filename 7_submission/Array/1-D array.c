# include<stdio.h>
# include<conio.h>
void main()
{
    int i;
    int n;
    int fybca4 [50];
    clrscr();
    printf("please enter size of array\n ");
    scanf("%d",&n);
    printf("storing data in 1-D array:\n");
    for (i=0; i<50; i++)
    {
        printf("enter elements at location:%d\t",i);
        scanf("%d",fybca4[i]);
    }

    printf("\n displaying contents of array\n");
    for (i=0; i<50; i++)
        printf("data on fybca4 [%d]is %d \n",i, fybca4 [i]);
    getch();
}
