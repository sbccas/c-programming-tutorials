/* Hitesh Patel Roll No: 999
WAP To scan and print 5 elements in Array.
*/

#include <stdio.h>
#include <conio.h>
void main()
{

    int i, amroli[100];
    int fybca[5] = {11, 22, 33, 44, 55};
    for (i = 0; i < 100; i++)
    {
        printf("enter amroli[%d]=>", i);
        amroli[i] = i + 1;
    }
    for (i = 0; i < 100; i++)
    {
        printf("\n amroli[%d]=%d", i, amroli[i]);
    }
    getch();
}
