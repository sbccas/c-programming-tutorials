/****************************
NAME  :- DHRUVI CHAVDA
TITTLE:- Menu driven program for weekend vacation
***************************/

#include<stdio.h>
#include<conio.h>
void main()
{
 int choice,city,food,home,clothes,writting,movie,bike,study;
 clrscr();

	 printf(" WELCOME TO PROGRAM\n");

	 printf("\nWHAT YOU WANT TO DO TODAY? \n");
	 printf("enter 1 for movie\n");
	 printf("enter 2 for food\n");
	 printf("enter 3 for study\n");
	 scanf("%d",&choice);

	 switch(choice)
	 {
	    case 1:
		     printf("_________________________________________\n");
		     printf("\n\nWHICH MOVIE YOU WANT TO WATCH???\n");
		     printf("1 : Avengers:end game\n");
		     printf("2 : iron man\n");
		     printf("3 : captain America:civil war\n");
		     printf("4 : shazam\n");

		     printf("PLEASE CHOOSE THE SOURCE FOR WATCH MOVIE? \n");
		     scanf("%d",&movie);

		     switch(movie)
		     {
			case 1:
			       printf("YOU WANT TO WATCH MOVIE IN MOBILE\n");
			       break;

			case 2:
			       printf("YOU WANT TO WATCH MOVIE IN TV\n");
			       break;

			case 3:
			       printf("YOU WANT TO WATCH MOVIE IN THEATRE\n");
			       break;
                   
                   
            case 4:
                  printf("YOU WANT TO WATCH MOVIE IN LAPTOP\n");


			default:
				printf("YOU CAN WATCH MOVIE ON YOUR ANOTHER OPTION\n");
				break;
			}
			break;

	    case 2:
		   printf("_________________________________\n");
		   printf("\n\nWHICH TYPE OF FOOD YOU EATING??\n\n");
		   printf("1 : Indian\n");
		   printf("2 : Chinese\n");
		   printf("3 : Italian\n");

		   printf("PLEASE ENTER YOUR CHOICE FOR YOUR FOOD\n");
		   scanf("%d",&food);

		   switch(food)
		   {
		     case 1:
			    printf(" OPTION FOR INDIAN FOOD\n");
			    printf("Dal Makhani\n");
			    printf("Stuffed Paratha\n");
			    printf("Dhokla\n");
			    break;

		     case 2:
			    printf("OPTION FOR CHINESE FOOD\n");
			    printf("Chinese Hot Pot\n");
			    printf("Spring Roll\n");
			    printf("Wonton soup\n");
			    printf("Chow Mein\n");
			    break;

		     case 3:
			    printf("OPTION FOR ITALIAN FOOD\n");
			    printf("Pizza\n");
			    printf("Pasta\n");
			    printf("Italian Cheese\n");
			    break;

		     

		      default:
			      printf("ANOTHER FOOD\n");
			      break;
		      }
		   break;

	    case 3:
		   printf("_______________________________\n\n");
		   printf("PLEASE CHOOSE THE SUBJECT FOR STUDY\n");
		   printf("1 : CPPM\n");
		   printf("2 : DMA\n");
		   printf("3 : MATHS\n");
		   printf("4 : IC\n");
		   printf("5 : With Realatives\n");
		   printf("PLEASE ENTER YOUR CHOICE\n");
		   scanf("%d",&study);

		   switch(study)
		   {
		     case 1:
			    printf("1: chapter 1\n");
			    printf("2: chapter 2\n");
			    printf("3: chapter 3\n");
			    printf("4: chapter 4\n");
			    break;

		     case 2:
			    printf("You Will learn chapter 1\n");
			    break;

		      case 3:
			     printf("You Will learn chapter 2\n");
			     break;

		      case 4:
			     printf("YOU will learn chapter 3\n");
			     break;
		      case 5:
			     printf("You will learn chapter 4\n");
			     break;

		      default:
			      printf("You Will learn Another topic Which You Like\n");
			      break;
		      }

		      break;
	    
		     

			  
		       

	    default:
		    printf("YOU DO ANYTHING IN YOUR DAY\n");
		    break;
		      }
		      getch();
		      }