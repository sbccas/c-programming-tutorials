/*
Name: chirag rathod
Roll no: 440
*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,a1,a2,b,b1,b2,d,e,f;
    printf("Enter any Option\n");
    printf("1. Watch the movie\n");
    printf("2. Eat food\n");
    printf("3. Go for ride\n");
    printf("4. Exit\n");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
    printf("You entered watch the movie option\n");
    printf("Where to Watch movie?\n");
    printf("1. Go to Theater\n");
    printf("2. Watch On mobile\n");
    printf("3. Watch on laptop\n");
    printf("4. Exit\n");
    scanf("%d",&a1);
    switch (a1)
    {
	case 1:
	printf("You choose to watch movie on theater\n");
	printf("Which movie you want to watch\n");
	printf("1. Gadar 2\n");
	printf("2. Jawaan\n");
	printf("3. Openheimer\n");
	printf("4. Exit\n");
	scanf("%d",&a2);
	switch (a2)
	{

	case 1:
	printf("\nYou choose to gader 2  Watch");
	break;

	case 2:
	printf("\nYou choose to Jawaan  Watch");
	break;

	case 3:
	printf("\nYou choose to Openheimer  Watch");
	break;

	}
	break;

	case 2:
	printf("You choose to watch movie on Mobile\n");
	printf("Which Platform you want to watch\n");
	printf("1. Amazon Prime\n");
	printf("2. Netflix\n");
	printf("3. Disney+ Hotstar\n");
	printf("4. Exit\n");
	scanf("%d",&b);
	switch (b)
	{

	case 1:
	printf("\nYou choose Amazon Prime to watch Movie");
	printf("Which movie you want to watch\n");
	printf("1. Rocky aur Rani ki Prem kahaani\n");
	printf("2. Pathaan\n");
	printf("3. Satyaprem ki katha\n");
	printf("4. Exit\n");
	scanf("%d",&a);
	switch (a)
	{

	case 1:
	printf("\nYou choose Rocky aur rani ki prem kahani to Watch");
	break;

	case 2:
	printf("\nYou choose Pathaan to Watch");
	break;

	case 3:
	printf("\nYou choose Satyaprem ki Katha to Watch");
	break;

	}
	break;

	case 2:
	printf("\nYou choose Netflix to watch Movie");
	printf("Which movie you want to watch\n");
	printf("1. The Sucide squad\n");
	printf("2. tu jhooti main makkar\n");
	printf("3. Extraction\n");
	printf("4. Exit\n");
	scanf("%d",&d);
	switch (d)
	{
	case 1:
	printf("\nYou choose The Sucide Squad to Watch");
	break;

	case 2:
	printf("\nYou choose tu jhooti main makkar to Watch");
	break;

	case 3:
	printf("\nYou choose Extraction to Watch");
	break;
	}
	break;

	case 3:
	printf("\nYou choose Disney+ Hotstar to watch Movie");
	printf("Which movie you want to watch\n");
	printf("1. Avatar: The Way of water\n");
	printf("2. Black Panther\n");
	printf("3. Avengers: End game\n");
	printf("4. Exit\n");
	scanf("%d",&a);
	switch (a)
	{
	case 1:
	printf("\nYou choose The Avatar: The Way of water to Watch");
	break;

	case 2:
	printf("\nYou choose tu Black Panther to Watch");
	break;

	case 3:
	printf("\nYou choose Avengers: End game to Watch");
	break;
	}
	break;
	}
	break;
	}
    case 3:
	printf("You choose to watch movie on Laptop\n");
	printf("Which Platform you want to watch\n");
	printf("1. Amazon Prime\n");
	printf("2. Netflix\n");
	printf("3. Disney+ Hotstar\n");
	printf("4. Exit\n");
	scanf("%d",&b);
	switch (b)
	{

	case 1:
	printf("\nYou choose Amazon Prime to watch Movie");
	printf("Which movie you want to watch\n");
	printf("1. Rocky aur Rani ki Prem kahaani\n");
	printf("2. Pathaan\n");
	printf("3. Satyaprem ki katha\n");
	printf("4. Exit\n");
	scanf("%d",&a);
	switch (a)
	{

	case 1:
	printf("\nYou choose Rocky aur rani ki prem kahani to Watch");
	break;

	case 2:
	printf("\nYou choose Pathaan to Watch");
	break;

	case 3:
	printf("\nYou choose Satyaprem ki Katha to Watch");
	break;

	}
	break;

	case 2:
	printf("\nYou choose Netflix to watch Movie");
	printf("Which movie you want to watch\n");
	printf("1. The Sucide squad\n");
	printf("2. tu jhooti main makkar\n");
	printf("3. Extraction\n");
	printf("4. Exit\n");
	scanf("%d",&d);
	switch (d)
	{
	case 1:
	printf("\nYou choose The Sucide Squad to Watch");
	break;

	case 2:
	printf("\nYou choose tu jhooti main makkar to Watch");
	break;

	case 3:
	printf("\nYou choose Extraction to Watch");
	break;
	}
	break;

	case 3:
	printf("\nYou choose Disney+ Hotstar to watch Movie");
	printf("Which movie you want to watch\n");
	printf("1. Avatar: The Way of water\n");
	printf("2. Black Panther\n");
	printf("3. Avengers: End game\n");
	printf("4. Exit\n");
	scanf("%d",&a);
	switch (a)
	{
	case 1:
	printf("\nYou choose The Avatar: The Way of water to Watch");
	break;

	case 2:
	printf("\nYou choose tu Black Panther to Watch");
	break;

	case 3:
	printf("\nYou choose Avengers: End game to Watch");
	break;
	}
	break;
	}
	break;

	default:
	break;
    }
    return 0;
}