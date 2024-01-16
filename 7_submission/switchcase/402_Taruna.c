#include <stdio.h >
#include <conio.h >
void  main()
{
int choice,i,n,fact,count,r,c,temp,sum,n1=0,n2=,n3,b,h,square ,area1;
float pi=3.14,area2;
printf(" \n menu : ");
printf("\n1. factoriAl ");
printf ("\n 2.  fibonaccic series");
printf("\n3.prime no.or no");
printf("\n4.plodrom no or not");
printf ("\n5.armstrong no or not");
printf("\n6.area of circle");
printf("\n7.area of trlangle");
printf("\n8. square of given no");
prinft("\n enter a choice:");
scanf("\n enter a choice  :");
scanf ( "%d",&choice);
switch ( choice)
{
case 1:
          printf ("\n enter a number  to find factorial : ");
          scanf("%d",&n);
          for(i==1;i<=n;i++)
          fact=fact*i;
          printf("\n factorial of %d is : %d* .n.fact);
          break
case 2:
           pritf("\n enter a number : " );
           scanf("%d",& n);
           printf("\n fibonasics series : ");
           prinft( "i=2; i<n;++i)
           {
           n3= n1+ n2;
           printf("%d," n3);
           n1=n2;
           n2=n3;
           }           
    break 
case3:
            printf("\n enter a number : " );
            scanf("%d",&n);
            for(i=1;<n;i++)
   {  
      if(n%i==0)
     count++;    
   }      
              if ( count==2)
              printf("\n%d is prime number ",n);
              else
             printf("\n%d is not prime number ",n);
             break;
case 4:         
              printf("\n enter a number :");
              scanf("%d",&n);
              temp=n;
              while(n>0)
              {
                r=n%d10;
                sum=(sum*10)+ r;
                n=n/10;
                }
                if(temp==sum)
                printf ("\n%d is palindrome number",n);
                else
                printf("\n%d not palindrome numner",n);
                break;
case 5:
              printf("\n enter the number : ");
              scanf("%d",&n);
              temp=n;
              while (n>0)
              {
              n=temp;
              c=r*r*r;
              sum=sum+c;
              n=n/10;
              }
              n=temp;
              if(temp==sum)
              {
              printf("\n%d is a armstrong number",n);
              }
              else
              {
              printf("\n%d is not a armstrong number",n);
              }
              break;
 case 6:
               printf("\n enter radius of circle: ");   
               scanf("%d",&r);
               area2=pi*r*r;
               printf("\n area of circle: % f",area 2);
               break;
 case 7:
                pritf("\n enter area b : ");
                scanf("%d" ,&b);
                printf("\n enter area h : ");
                scanf("%d",&b);
                area 1=(b*h)/2;
                printf("\n area of triangle is : %d", area1);
                break;
 case 8 :              
                 printf("\n enter any number : ");
                 scanf("%d".&n);
                 square=n*n;
                 printf("\n the square of %d number is : %d,n,square;
                 break;
  }               
       return ();
  }                      
                 