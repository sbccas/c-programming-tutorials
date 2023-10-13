/* Remark Statement Roll No: 999 Name : Hitesh Patel Year / Div : FYBCA-1*/
/*     3.  WAP to Read 3 Numbers from Keyboard and Find out the Maximum Number (Nested IF).  */
 
#include <stdio.h> 
void main() 
{ 
  int a,b,c;
  printf("Please Enter 3 Numbers : \n");
  scanf("%d%d%d",&a,&b,&c);
  if (a>b)
  {
      if(a>c)
      {
          printf("%d id MAX",a);
      }
      else
      {
          printf("%d id MAX",c);
      }
  }
  else
  {
    if (b>c)  
    {
        printf("%d id MAX",b);
    }
    else
    {
        printf("%d id MAX",c);
    }
  }
    
}
  