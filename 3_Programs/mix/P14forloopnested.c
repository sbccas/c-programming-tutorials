/* Hitesh Patel Roll No: 999
WAP to demonstrate use of NESTED For Loop
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k;
    k = 0;
    // clrscr();
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            for (j = 1; j <= 5; j++)
            {
                for (j = 1; j <= 5; j++)
                {
                    for (j = 1; j <= 5; j++)
                    {
                        printf("FYBCA1\n");
                        k = k + 1;
                        // continue;
                        printf("FYBCA2\n");
                    }
                    printf("FYBCA1\n");
                    k = k + 1;
                    // continue;
                    printf("FYBCA2\n");
                }
                printf("FYBCA1\n");
                k = k + 1;
                // continue;
                printf("FYBCA2\n");
            }
            printf("FYBCA1\n");
            k = k + 1;
            // continue;
            printf("FYBCA2\n");
        }
    }
    printf("\n%d", k);
    getch();
}
