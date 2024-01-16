
#include<stdio.h>
#include<conio.h>
void main()
{
 int choice,city,food,home,clothes,writting,movie,bike;
 clrscr();

	 printf(" :) WELCOME TO PROGRAMM FOR your choice (: \n");

	 printf("\n\nEnter your favourite day for your enjoy\n");
	 printf("1 : tour\n");
	 printf("2 : food\n");
	 printf("3 : stay\n");
	 printf("4 : clothes\n");
	 printf("5 : study\n");
	 printf("6 : movie\n");
	 printf("7 : ride\n");
	 scanf("%d",&choice);

	 switch(choice)
	 {
	    case 1:
		     printf("____________________ FOR tour_____________________\n");
		     printf("\n\nWHICH ONE WOULD YOU PREFER TO GO???\n");
		     printf("1 : goa\n");
		     printf("2 : Jammu Kashmir\n");
		     printf("3 : delhi\n");
		     printf("4 : keral\n");
		     printf("5 : Haiydrabad\n");
		     printf("6 : Mumbai\n");

		     printf("PLEASE CHOOSE YOUR PLACE WHERE YOU WANT TO GO FOR YOUR JOYFUL MEMORIES\n");
		     scanf("%d",&city);

		     switch(city)
		     {
			case 1:
			       printf("YOU WANT TO GO Shimla Manali WITH YOUR PERSONAL VIHICALE\n");
			       break;

			case 2:
			       printf("YOU WANT TO GO Jammu Kashmir TO CAR\n");
			       break;

			case 3:
			       printf("YOU WANT TO GO delhi BY BUS\n");
			       break;

			case 4:
			       printf("YOU WANT TO GO keral BY AROPLANE\n");
			       break;

			case 5:
			       printf("YOU WANT TO GO Haiydrabad BY SUBMARINE\n");
			       break;

			case 6:
			       printf("YOU WANT TO GO MUMBAI BY YOUR BIKE\n");
			       break;


			default:
				printf("YOU CAN GO Mumbai WITH YOUR ANOTHER OPTION\n");
				break;
			}
			break;

	    case 2:
		   printf("___________________FOR food_______________\n");
		   printf("\n\nWHICH TYPE OF FOOD YOU EATING??\n\n");
		   printf("1 : Indian\n");
		   printf("2 : Chinese\n");
		   printf("3 : Italian\n");
		   printf("4 : gujarati food\n");
		   printf("5 : South Indian\n");
		   printf("6 : American\n");

		   printf("PLEASE ENTER YOUR CHOICE FOR YOUR FOOD\n");
		   scanf("%d",&food);

		   switch(food)
		   {
		     case 1:
			    printf("HERE IS YOUR OPTION FOR INDIAN FOOD\n");
			    printf("Dal Makhani\n");
			    printf("Stuffed Paratha\n");
			    printf("Dhokla\n");
			    printf("Masala chai with Thepla\n");
			    printf("Khichadi Kadhi\n");
			    break;

		     case 2:
			    printf("HERE IS YOUR OPTION FOR CHINESE FOOD\n");
			    printf("Chinese Hot Pot\n");
			    printf("Mapo Tofu\n");
			    printf("Spring Rolls\n");
			    printf("Wonton soup\n");
			    printf("Chow Mein\n");
			    break;

		     case 3:
			    printf("HERE IS YOUR OPTION FOR ITALIAN FOOD\n");
			    printf("Pizza\n");
			    printf("Pasta\n");
			    printf("Italian Cheese\n");
			    printf("Truffules\n");
			    printf("Pizza with Bread\n");
			    break;

		     case 4:
			    printf("HERE IS YOUR CHOICE FOR MAHARASTRIAN FOOD\n");
			    printf("thepla\n");
			    printf("dhokla\n");
			    printf("undhiu\n");
			    printf("Ragda Pattice\n");
			    printf("jalebi phapda\n");
			    break;

		     case 5:
			    printf("HERE IS YOUR CHOICE FOR SOUTH INDIAN FOOD\n");
			    printf("Pongal\n");
			    printf("Masala Dosa\n");
			    printf("Appam\n");
			    printf("Sambhar\n");
			    printf("Upma\n");
			    break;

		      case 6:
			     printf("HERE IS YOUR CHOICE FOR AMERICAN FOOD\n");
			     printf("Lime pie\n");
			     printf("Burgar\n");
			     printf("Chocolate cookie\n");
			     printf("Pancakes\n");
			     printf("French Fries\n");
			     break;

		      default:
			      printf("ANOTHER FOOD\n");
			      break;
		      }
		   break;

	    case 3:
		   printf("_________________FOR stay_______________\n\n");
		   printf("YOU WANT TO go anywhere??\n");
		   printf("1 : farm house\n");
		   printf("2 : hotel\n");
		   printf("3 : desert\n");
		   printf("4 : movie\n");
		   printf("5 : river bake\n");
		   printf("PLEASE ENTER YOUR CHOICE\n");
		   scanf("%d",&home);

		   switch(home)
		   {
		     case 1:
			    printf("You Will Play Pillow Fight\n");
			    printf("You Will Play Truth Or Dare\n");
			    printf("You Will Play Lemon On A Spoon\n");
			    printf("You Will Play Video Games\n");
			    printf("You Will Play Ball Drop\n");
			    printf("You Will Play Name,Place,Animal,Thing\n");
			    break;

		     case 2:
			    printf("enjoy food \n");
			    break;

		      case 3:
			     printf("enjoy camel ride and horseride\n");
			     break;

		      case 4:
			     printf("enjoy movie \n");
			     break;

		      case 5:
			     printf("enjoy with water\n");
			     break;

		      default:
			      printf("You Will Do Another Activity Which You Like\n");
			      break;
		      }

		      break;
	    case 4:
		   printf("____________________FOR clothes______________________\n\n");
		   printf("YOU WANT TO GO SHOPPING\n");
		   printf("1 : Indian Clothes\n");
		   printf("2 : Maharastrian Clothes\n");
		   printf("3 : Western Clothes\n");
		   printf("4 : Bengali Clothes\n");
		   printf("5 : Parsi Clothes\n");
		   printf("\n\nPLEASE ENTER YOUR CHOICE OF CLOTHES\n");
		   scanf("%d",&clothes);

		   switch(clothes)
		   {
		     case 1:
			    printf("FEMALE :- Saree\n");
			    printf("MALE   :- Kurta\n");
			    break;

		     case 2:
			    printf("FEMALE :- Navari Saree\n");
			    printf("MALE   :- Dhoti Kurta\n");
			    break;

		     case 3:
			    printf("FEMALE :- Frok\n");
			    printf("MALE   :- Jeans T-Shirt\n");
			    break;

		     case 4:
			    printf("FEMALE :- Marathi saree\n");
			    printf("MALE   :- Treditionally Dhoti\n");
			    break;

		     case 5:
			    printf("FEMALE :- Gara sari\n");
			    printf("MALE   :- As Well Kurta\n");
			    break;

		     default:
			     printf("AS PER YOUR WISH\n");
			     break;
		     }
		    break;

	    case 5:
		   printf("________________FOR studying___________\n");
		   printf("YOU WANT TO studying?\n\n");
		   printf("PLEASE ENTER YOUR CHOICE\n");
		   scanf("%d",&writting);

		   switch(writting)
		   {
		     case 1:
			    printf("cppm learning\n");
			    break;

		     case 2:
			    printf("ic learning\n");
			    break;

		     case 3:
			    printf("cs learning\n");
			    break;

		     case 4:
			    printf("maths learning\n");
			    break;

		     default:
			     printf("AS YOUR WISH\n");
			     break;
		       }
		       break;

	    case 6:
		   printf("____________________FOR movie_______________\n\n");
		   printf("YOU WANT TO SEE A MOVIE???\n");
		   printf("1 : Action Movie\n");
		   printf("2 : Horror Movie\n");
		   printf("3 : romantic Movie\n");
		   printf("4 : Drama Movie\n");
		   printf("5 : South Movie\n");
		   printf("ENETR YOUR FAVORITE MOVIE\n");
		   scanf("%d",&movie);

		   switch(movie)
		   {
		      case 1:
			     printf("The Matrix\n");
			     break;

		      case 2:
			     printf("Infinity Pool\n");
			     break;

		      case 3:
			     printf("96\n");
			     break;

		      case 4:
			     printf("RX 100\n");
			     break;

		      case 5:
			     printf("Heat\n");
			     break;

		      default:
			      printf("ANOTHER MOVIE\n");
			      break;
		       }
		       break;

	    case 7:
		    printf("_________________FOR ride_____________\n");
		    printf("DO YOU WANT TO RIDE A BIKE??\n");
		    printf("PLESAE ENTER YOUR VEHICALE FOR RIDE??\n");
		    scanf("%d",&bike);

		    switch(bike)
		    {
		       case 1:
			      printf("1 : scooter\n");
			      break;

		       case 2:
			      printf("1 : Bike Tyson\n");
			      break;

		       case 3:
			      printf("3 : car\n");
			      break;

		       case 4:
			      printf("4 : activa\n");
			      break;

		       case 5:
			      printf("5 : bulet\n");
			      break;

		       default:
			       printf("AS YOUR WISH\n");
			       break;
			  }
		       break;

	    default:
		    printf("YOU DO ANYTHING IN YOUR WEEKEND\n");
		    break;
		      }
		      getch();
		      }