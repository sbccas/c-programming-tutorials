/* Title: WAP to count and replace given Character by user in a Character Array
   Programmer: Hitesh Patel Year/Div: MSCIT Sem-1 RollNo: 999 
   Date: November 17, 2025
   U5P1StringData.C
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    char charToCount;
    int count = 0, i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character to count/Replace: ");
    scanf(" %c", &charToCount);
    // Counting occurrences and replacing characters
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == charToCount) {
            count++;                
        }
        else
        {
            printf("%c",str[i]);
        }
    }

    printf("The character '%c' occurred %d times.\n", charToCount, count);
    

    return 0;
}   