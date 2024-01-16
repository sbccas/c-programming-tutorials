/*
	Name:-Sarthak Pansuriya
	Roll No :- 403
	Collage:- Sutex bank collage of application and science
	Division:- 4
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int choice;
	int a,b,c,d;
	float div;
	clrscr();
	printf("Which movie do you want to watch ?\n");
	printf("1: Hollywood movie\n");
	printf("2: Bollywood movir\n");
	printf("3: South indian movie\n");
	printf("4: Gujarati movie\n");
	printf("Please enter number :- ");
	scanf("%d",&choice);

	switch(choice)

	{
		case 1:
			printf("\nWhich hollywood movie\n");
			printf("1: Horror movie\n");
			printf("2: Action movie\n");
			printf("3: Adventure movie\n");
			printf("Enter number :- ");
			scanf("%d",&a);
		switch(a)

		{
			case 1:
				printf("\nYou watch The num 2");
			break;

			case 2:
				printf("You watch Spider-man");
			break;

			case 3:
				printf("You watch The Little Mermaid");
			break;

			default:
				printf("\n Wrong choice ");
			break;
		}
		break;
	case 2:
			printf("\nWhich bollywood movie\n");
			printf("1: Comedy movie\n");
			printf("2: Romance movie\n");
			printf("3: Drama movie\n");
			printf("Enter number :- ");
			scanf("%d",&b);
		switch(b)
		{
			case 1:
				printf("\nYou watch Phir hera pheri \n");
			break;

			case 2:
				printf("\nYou watch Aashiqui 2 \n");
			break;

			case 3:
				printf("\nYou watch Raaghu \n");
			break;

			default:
				printf("\n Wrong choice ");
			break;
		}
		break;
	case 3:
			printf("\nWhich south indian movie ? \n");
			printf("1: Sci-fi\n");
			printf("2: Crime\n");
			printf("3: Mystery\n");
			printf("Enter number :- ");
			scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("\nYou watch 2.o \n");
			break;

			case 2:
				printf("\nYou watch Jailer \n");
			break;

			case 3:
				printf("\nYou watch Toby \n");
			break;

			default:
				printf("\n Wrong choice ");
			break;

		}
		break;

		case 4:
			printf("\nWhich Gujarati movie ? \n");
			printf("1: Family movie \n");
			printf("2: love movie \n");
			printf("3: Gujarati comedy movie \n");
			printf("Enter number :- ");
			scanf("%d",&d);
		switch(d)
		{
			case 1:
				printf("\nYou watch Happy familyy\n");
			break;

			case 2:
				printf("\nYou watch Tari sathe \n");
			break;

			case 3:
				printf("\nYou watch Chhello divas \n");
			break;

			default:
				printf("\n Wrong choice ");
			break;

		}
		break;


		default:
		printf("\n The choice is invalaid ! click enter and retry ...");
		}
		getch();

}




