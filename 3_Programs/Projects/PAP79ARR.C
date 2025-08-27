/*DOCUMENTATION SECTION
PAP 79.WAP TO SHOW DEMO OF 1 D ARRAY:
*/
#include <stdio.h>
#include <conio.h>
void main()
{
int fybca7[10],i;
clrscr();
printf("PROGRAM TO STORE DATA IN ARRAY:\n");
	for(i=0;i<10;i++)
	{
	printf("\nPlease Enter Element for fybca7[%d]= ",i);
	scanf("%d",&fybca7[i]);
	}
printf("DISPLAYING STORED DATA IN ARRAY:\n");
for(i=0;i<10;i++)
{
printf("ELEMENT AT fybca[%d]=%d\n",i,fybca7[i]);
}
getch();


}                
