/* Hitesh Patel Roll No: 999
Prog taking Input and Displaying
 Output in Two Dimen Array

*/
#include<stdio.h>
#include<conio.h>
void main()
{
int amroli[2][3],i,j;
int k,l;
printf("ENTER ROW SIZE and COLUMN SIZE");
scanf("%d%d",&k,&l);
int sutex[k][l];
printf("\n Enter Elements:");
printf("SIZE SUTEX IS :");
int x,y;
int h=1;
for(x= 0; x < k; x++)
{
    for (y=0; y< l ; y++)
    {
        sutex[x][y] = h;
        h++;
        printf("\nsutex[%d][%d]= %d",x,y,sutex[x][y]);
    }

}
//// THIS IS FOR STORING ELEMENTS IN 2 D ARRAY
/*
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
printf("\n Enter Element for amroli[%d][%d]=\n",i,j);
scanf("%d",&amroli[i][j]);
    }
 }
//// THIS IS FOR DISPLAYING ELEMENTS IN 2 D ARRAY
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {
printf("\n Element at Location amroli[%d][%d]=   is  %d \n",i,j,amroli[i][j]);
    }
 }
 */
}
