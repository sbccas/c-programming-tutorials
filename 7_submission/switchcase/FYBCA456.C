/******************************************************************
Name		:-  Tala Riyal Nileshbhai
Roll No.	:-  456
Topic 		:-  Nested Switch Case
******************************************************************/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,choice;
	clrscr();
	printf("1. Play games\n");
	printf("2. Eating a food\n");
	printf("3. Watching movie\n");
	printf("4. Travelling\n");
	printf("What do you like today\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("You Choose Play Games\n");
		printf("1. Indoor Games\n");
		printf("2. Outdoor Games\n");
		printf("3. Mobile games\n");
		printf("which games would you like today played\n");
		scanf("%d",&a);
		switch(a)
			{
			case 1:
			printf("You Choose Indoor games\n");
			printf("1. chess\n");
			printf("2. carrom\n");
			printf("3. table tennis\n");
			printf("Which Indoor Games like you play today\n");
			scanf("%d",&a1);
			switch(a1)
				{
				case 1:
				printf("You Choose Chess\n");
				printf("Enjoy your Chees\n");
				break;

				case 2:
				printf("You choose caroom\n");
				printf("Enjoy your caroom\n");
				break;

				case 3:
				printf("You Choose Table Tennis\n");
				printf("Enjoy your Table Tannis\n");
				break;
				}
				break;

			case 2:
			printf("You Choose Outdoor Games\n");
			printf("1. cricket\n");
			printf("2. kho kho\n");
			printf("3. kabbadi\n");
			printf("Which Outdoor Games like you play today\n");
			scanf("%d",&a2);
			switch(a2)
				{
				case 1:
				printf("you Choose Cricket\n");
				printf("Enjoy Your Cricket game\n");
				break;

				case 2:
				printf("You choose kho kho\n");
				printf("Enjoy Your kho kho game\n");
				break;

				case 3:
				printf("You choose kabbadi\n");
				printf("Enjoy Your kho kabbadi\n");
				break;
				}
				break;

			case 3:
			printf("You Choose Mobile Games\n");
			printf("1. free fire\n");
			printf("2. BGMI\n");
			printf("3. clash of clans\n");
			printf("Which mobile Games like you play today\n");
			scanf("%d",&a3);
			switch(a3)
				{
				case 1:
				printf("you Choose  free fire\n");
				printf("Enjoy Your free fire game\n");
				break;

				case 2:
				printf("You choose BGMI\n");
				printf("Enjoy Your BGMI game\n");
				break;

				case 3:
				printf("You choose clash of clans\n");
				printf("Enjoy Your clash of clans game\n");
				break;
				}
				break;
				}
		case 2:
		printf("You Choose Eating a food\n");
		printf("1. Eating Food at Home\n");
		printf("2. Eating Food on Street\n");
		printf("3. Eating Food in Hotel\n");
		printf("Which Food would you like eating today\n");
		scanf("%d",&b);
		switch(b)
		{
			case 1:
			printf("You Choose a Home food\n");
			printf("1. sabji-roti\n");
			printf("2. Dal bhat\n");
			printf("3. Kadhi khichdi\n");
			printf("Which Home Food Would you like eating today\n");
			scanf("%d",&b1);
			switch(b1)
				{
				case 1:
				printf("You  choose sabji-roti\n");
				printf("Enjoy your sabji-roti\n");
				break;

				case 2:
				printf("You choose Dal bhat\n");
				printf("Enjoy your Dal bhat\n");
				break;

				case 3:
				printf("You choose kadhi khichdi\n");
				printf("Enjoy your kadhi khichdi\n");
				break;
				}
				break;

			case 2:
			printf("You Choose a street food\n");
			printf("1. frankie\n");
			printf("2. pani puri\n");
			printf("3. vadapav\n");
			printf("Which street Food Would you like eating today\n");
			scanf("%d",&b2);
			switch(b2)
				{
				case 1:
				printf("You  choose frankie\n");
				printf("Enjoy your frankie\n");
				break;

				case 2:
				printf("You choose pani puri\n");
				printf("Enjoy your pani puri\n");
				break;

				case 3:
				printf("You choose vadapav\n");
				printf("Enjoy your vadapav\n");
				break;
				}
				break;

			case 3:
			printf("You Choose a Hotel food\n");
			printf("1. Dhosa\n");
			printf("2. Manchurian\n");
			printf("3. pav bhaji\n");
			printf("Which Hotel Food Would you like eating today\n");
			scanf("%d",&b3);
			switch(b3)
				{
				case 1:
				printf("You  choose Dhosa\n");
				printf("Enjoy your Dhosa\n");
				break;

				case 2:
				printf("You choose Manchurian\n");
				printf("Enjoy your Manchurian\n");
				break;

				case 3:
				printf("You choose pav bhaji\n");
				printf("Enjoy your pav bhaji\n");
				break;
				}
				break;
				}
		case 3:
		printf("You Choose watching a movie\n");
		printf("1. PVR Cinema\n");
		printf("2. Inox Cinema\n");
		printf("which cinema would you like today watch a movie\n");
		scanf("%d",&c);
		switch(c)
			{
			case 1:
			printf("You Choose PVR Cinema\n");
			printf("1. Jawan\n");
			printf("2. 3 AKKA\n");
			printf("3. OMG 2\n");
			printf("Which Movie like you watch today\n");
			scanf("%d",&c1);
			switch(c1)
				{
				case 1:
				printf("You Choose Jawan Movie\n");
				printf("Enjoy Jawan Movie\n");
				break;

				case 2:
				printf("You choose 3 AKKA Movie\n");
				printf("Enjoy 3 AKKA movie");
				break;

				case 3:
				printf("You Choose OMG 2 Movie\n");
				printf("Enjoy OMG 2 Movie\n");
				break;
				}
				break;

			case 2:
			printf("You Choose Inox Cinema\n");
			printf("1. Jawan\n");
			printf("2. Jailer\n");
			printf("3. OMG 2\n");
			printf("Which Movie would you like watch today\n");
			scanf("%d",&c2);
			switch(c2)
				{
				case 1:
				printf("you Choose Jawan Movie\n");
				printf("Enjoy Jawan Movie\n");
				break;

				case 2:
				printf("You choose Jailer movie\n");
				printf("Enjoy Jailer movie\n");
				break;

				case 3:
				printf("You choose OMG 2\n");
				printf("Enjoy Your OMG 2\n");
				break;
				}
				break;
			}
		case 4:
		printf("You Choose Travelling\n");
		printf("1. Travelling With Family\n");
		printf("2. Travelling With Friends\n");
		printf("\n");
		scanf("%d",&d);
		switch(d)
			{
			case 1:
			printf("You Choose Travelling With Family\n");
			printf("1. Dumas Beach\n");
			printf("2. Suvali Beach\n");
			printf("3. Aquarium\n");
			printf("Which place would you like travell today\n");
			scanf("%d",&d1);
			switch(d1)
				{
				case 1:
				printf("You Choose Dumas Beach\n");
				printf("Enjoy on Dumas Beach\n");
				break;

				case 2:
				printf("You choose Suvali Beach\n");
				printf("Enjoy on Suvali beach\n");
				break;

				case 3:
				printf("You Choose Aquarium\n");
				printf("Enjoy in Aquarium\n");
				break;
				}
				break;

			case 2:
			printf("You Choose Travelling With Friends\n");
			printf("1. VR mall\n");
			printf("2. Game Zone \n");
			printf("3. Dumas Beach\n");
			printf("Which Movie would you like watch today\n");
			scanf("%d",&d2);
			switch(d2)
				{
				case 1:
				printf("you Choose VR Mall\n");
				printf("Enjoy in VR Mall\n");
				break;

				case 2:
				printf("You choose Game zone\n");
				printf("Enjoy in Game Zone\n");
				break;

				case 3:
				printf("You choose Dumas Beach\n");
				printf("Enjoy on Dumas Beach\n");
				break;
				}
				break;
				}

		default :
		printf("Invalid Choice\n");

      }
      printf("====================================\n");
      printf("Bye Bye\n");
      getch();
}