#include <stdio.h>
#include <conio.h>

void main()
{
	int option, movie, icecream, bike, scren, flv, ver, gadi, road;
	clrscr();
	printf("\n1.  first option is movie");
	printf("\n2.  second option is ice - cream");
	printf("\n3.  third option is bike ride");
	printf("\n4.  Exit");
	printf("\nplz select option = ");
	scanf("%d", &option);
	switch (option)
	{
	case 1:
		printf("\nyou select option is movie");
		printf("\n1. gadar 2");
		printf("\n2. 3 akka");
		printf("\n3. stay prem ki katha");
		printf("\nWhich moive you can like see it?\nplz select movie = ");
		scanf("%d", &movie);
		switch(movie)
		{
		case 1:
			printf("\nyou select a gadar2");
			printf("\n1. small scren (smartphon)");
			printf("\n2. mediam scren (leptop)");
			printf("\n3. large scren (projector)");
			printf("\nwitch screen see you can like it\nplz select scren = ");
			scanf("%d", &scren);
			switch (scren)
			{
			case 1:
				printf("\n your selected option is gadar2 movie in samll scren");
				break;

			case 2:
				printf("\n your selected option is gadar2 movie in mediam scren");
				break;
			case 3:
				printf("\n your selected option is gadar2 movie in large scren");
				break;

			default:
				printf("\n plz select a 1 - 3 ");
				break;
			}
			break;
		case 2:
			printf("\nyou select a 3 akka");
			printf("\n1. small scren (smartphon)");
			printf("\n2. mediam scren (leptop)");
			printf("\n3. large scren (projector)");
			printf("\nwitch screen see you can like it\nplz select scren = ");
			scanf("%d", &scren);
			switch (scren)
			{
			case 1:
				printf("\n your selected option is 3 akka movie in samll scren");
				break;

			case 2:
				printf("\n your selected option is 3 akka movie in mediam scren");
				break;
			case 3:
				printf("\n your selected option is 3 akka movie in large scren");
				break;

			default:
				printf("\n plz select a 1 - 3 ");
				break;
			}
			break;
		case 3:
			printf("\nyou select a stay prem ki katha");
			printf("\n1. small scren (smartphon)");
			printf("\n2. mediam scren (leptop)");
			printf("\n3. large scren (projector)");
			printf("\nwitch screen see you can like it\nplz select scren = ");
			scanf("%d", &scren);
			switch (scren)
			{
			case 1:
				printf("\n your selected option is stay prem ki katha  movie in samll scren");
				break;

			case 2:
				printf("\n your selected option is stay prem ki katha movie in mediam scren");
				break;
			case 3:
				printf("\n your selected option is stay prem ki katha movie in large scren");
				break;

			default:
				printf("\n plz select a 1 - 3 ");
				break;
			}
			break;

		default:
			printf("\n plz select a 1 - 3 ");
			break;
		}
		break;
	case 2:
		printf("\nyou select option is ice - cream");
		printf("\n1. chocalate");
		printf("\n2. venilaa");
		printf("\n3. mangoo");
		printf("\nplz select your favourite flavour - ");
		scanf("%d", &flv);
		switch (flv)
		{
		case 1:
			printf("\nyour selected flavour is chocalate");
			printf("\nwhat do you want eat ?");
			printf("\n1. chocalate candy");
			printf("\n2. chocalte con");
			printf("\n3. chocalate malay");
			printf("\nplz select do you want like eat = ");
			scanf("%d", &ver);
			switch (ver)
			{
			case 1:
				printf("\nyour selected option is chocalate candy\nplz enjoy it:)");
				break;

			case 2:
				printf("\nyour selected option is chocalate con\nplz enjoy it:)");
				break;

			case 3:
				printf("\nyour selected option is chocalate malay\nplz enjoy it:)");
				break;
			}
			break;
		case 2:
			printf("\nyour selected flavour is venilaa");
			printf("\nwhat do you want eat ?");
			printf("\n1. venilaa candy");
			printf("\n2. venilaa con");
			printf("\n3. venilaa malay");
			printf("\nplz select do you want like eat = ");
			scanf("%d", &ver);
			switch (ver)
			{
			case 1:
				printf("\nyour selected option is venilaa candy\nplz enjoy it:)");
				break;

			case 2:
				printf("\nyour selected option is venilaa con\nplz enjoy it:)");
				break;

			case 3:
				printf("\nyour selected option is venilaa malay\nplz enjoy it:)");
				break;
			}
			break;
		case 3:
			printf("\nyour selected flavour is mangoo");
			printf("\nwhat do you want eat ?");
			printf("\n1. mangoo candy");
			printf("\n2. mangoo con");
			printf("\n3. mangoo malay");
			printf("\nplz select do you want like eat = ");
			scanf("%d", &ver);
			switch (ver)
			{
			case 1:
				printf("\nyour selected option is mangoo candy\nplz enjoy it:)");
				break;

			case 2:
				printf("\nyour selected option is mangoo con\nplz enjoy it:)");
				break;

			case 3:
				printf("\nyour selected option is mangoo malay\nplz enjoy it:)");
				break;
			}
			break;

		default:
			printf("\n plz select a 1 - 3 ");

			break;
		}
		break;
	case 3:
		printf("\nyour option is bike ride");
		printf("\nWhich bike you want ride it ?");
		printf("\n1. Royal Enfield");
		printf("\n2. Javaa");
		printf("\n3. FZ - X");
		printf("\n plz select your bike = ");
		scanf("%d", &gadi);
		switch (gadi)
		{
		case 1:
			printf("\nyou are select a royal enfield");
			printf("\nWhich road on like it ride ");
			printf("\n1. on road");
			printf("\n2. off road");
			printf("\n plz select road on ride = ");
			scanf("%d", &road);
			switch (road)
			{
			case 1:
				printf("\nYou are selected bike is Royal Enfield and you ride in on road");
				break;
			case 2:
				printf("\nYou are selected bike is Royal Enfield and you ride in off road");
				break;
			}

			break;
		case 2:
			printf("\nyou are select a  Javaa");
			printf("\nWhich road on like it ride ");
			printf("\n1. on road");
			printf("\n2. off road");
			printf("\n plz select road on ride = ");
			scanf("%d", &road);
			switch (road)
			{
			case 1:
				printf("\nYou are selected bike is Javaa and you ride in on road");
				break;
			case 2:
				printf("\nYou are selected bike is Javaa and you ride in off road");
				break;
			}

			break;
		case 3:
			printf("\nyou are select a  FZ - X");
			printf("\nWhich road on like it ride ");
			printf("\n1. on road");
			printf("\n2. off road");
			printf("\n plz select road on ride = ");
			scanf("%d", &road);
			switch (road)
			{
			case 1:
				printf("\nYou are selected bike is FZ - X and you ride in on road");
				break;
			case 2:
				printf("\nYou are selected bike is FZ - X and you ride in off road");
				break;
			}

			break;

		default:
			printf("\n plz select a 1 - 3 ");

			break;
		}
		break;
	case 4:
		exit(0);
		break;

	}

	getch();

	// return 0;
}