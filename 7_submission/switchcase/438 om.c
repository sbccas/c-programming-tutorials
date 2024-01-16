#include <stdio.h>

int main() 
{
    int n;
    for(n=1;n<=70;n++)
    {
        if(n==53)
        {
            continue;
        }
     printf("number: %d\n",n);  
    }
    return 0;
}