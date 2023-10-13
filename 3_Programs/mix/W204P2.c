/* Hitesh Patel Roll No: 999
WAP to Initialize Array on Run Time
*/
#include <stdio.h>
#include <conio.h>
void main()
{
 float T[1000];
 int a=0;
 for (a=0;a<1000;a++)
 {
     if (a<500)
     T[a]= 0.0;
     else
     T[a]=5.0;
 }
// print karava mate
for(a=0;a<1000;a++)
{
    printf("VALUE of T[%d], is %f\n",a,T[a]);
}

}
