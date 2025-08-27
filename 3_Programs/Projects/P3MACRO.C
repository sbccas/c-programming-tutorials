/*DOCUMENTATION
NAME
TITLE
YEAR
*/

#include<stdio.h>
#include<conio.h>

//#define max 999
#define chapo printf
#define sutex "SutexBank College of Computer Applications and Science"
void main()
{
clrscr();
#ifdef max
chapo("VALUE OF MAX IS %d\n",max);
chapo("COLLEGE NAME IS: -%s",sutex);
#else
chapo("MAX IS NOT DEFINED");
#endif
getch();
}


