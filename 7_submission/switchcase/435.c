/* Programmer : Meet kasawala
   Roll No. : 435
   College : Sutex Bank College Of Computer Applications & Science
   Title : Menu Driven Program For  Games
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int choice,typeforpc,typeformobile,game,acgamespc,rcgamespc,pugamespc,spgamespc,acgamesmob,rcgamesmob,pugamesmob,spgamesmob;

    clrscr();
    printf("\n Welcome to Program To Select Game You Like ");
    printf("\n 1.PC Games");
    printf("\n 2.Mobile Games");
    printf("\n 3.Exit");
    printf("\n Please Enter Your Choice:  ");
    scanf("%d",&choice);


    switch (choice)
    {
    case 1:
	printf("\n Game Categories ");
	printf("\n 1.Action Games");
	printf("\n 2.Racing Games");
	printf("\n 3.Puzzle Games");
	printf("\n 4.Sports Games");
	printf("\n 5.Exit");
	printf("\n Please Enter Your Game Category:  ");
	scanf("%d",&typeforpc);
	switch (typeforpc)
	{
	      case 1:
		    printf("\n ACTION GAMES");
		    printf("\n 1.GOD OF WAR");
		    printf("\n 2.VALORANT");
		    printf("\n 3.GTA V");
		    printf("\n 4.CYBER PUNK 2077");
		    printf("\n 5.Exit");
		    printf("\n Please Enter Your Game no:  ");
		    scanf("%d",&acgamespc);
		    switch (acgamespc)
			{
				case 1:
					printf("\n Game You Like Is : GOD OF WAR ");
					break;

				case 2:
					printf("\n Game You Like Is : VALORANT ");
					break;

				case 3:
					printf("\n Game You Like Is : GTA V ");
					break;

				case 4:
					printf("\n Game You Like Is : CYBER PUNK 2077 ");
					break;
				case 5:
					printf("\n Thank You, Have a Good Day");
					break;

			}
		    break;

	     case 2:
		    printf("\n RACING GAMES");
		    printf("\n 1.FORZA HORIZON 5");
		    printf("\n 2.DIRT 5");
		    printf("\n 3.ASPHALT 9:LEGENDS");
		    printf("\n 4.MOTO GP 23");
		    printf("\n 5.Exit");
		    printf("\n Please Enter Your Game no:  ");
		    scanf("%d",&rcgamespc);
		    switch (rcgamespc)
			{
				case 1:
					printf("\n Game You Like Is : FORZA HORIZON 5 ");
					break;

				case 2:
					printf("\n Game You Like Is : DIRT 5 ");
					break;

				case 3:
					printf("\n Game You Like Is : ASPHALT 9:LEGENDS ");
					break;

				case 4:
					printf("\n Game You Like Is : MOTO GP 23 ");
					break;
				case 5:
					printf("\n Thank You, Have a Good Day");
					break;
			}
		    break;

	     case 3:
		    printf("\n PUZZLE GAMES");
		    printf("\n 1.THE WITNESS");
		    printf("\n 2.UNPACKING");
		    printf("\n 3.FISHDOM");
		    printf("\n 4.PORTAL");
		    printf("\n 5.Exit");
		    printf("\n Please Enter Your Game no:  ");
		    scanf("%d",&pugamespc);
		    switch (pugamespc)
			{
				case 1:
					printf("\n Game You Like Is : THE WITNESS ");
					break;

				case 2:
					printf("\n Game You Like Is : UNPACKING ");
					break;

				case 3:
					printf("\n Game You Like Is : FISHDOM ");
					break;

				case 4:
					printf("\n Game You Like Is : PORTAL ");
					break;
				case 5:
					printf("\n Thank You, Have a Good Day");
					break;

			}
		    break;

	     case 4:
		    printf("\n SPORTS GAMES");
		    printf("\n 1.CRICKET 22");
		    printf("\n 2.FIFA 23 ");
		    printf("\n 3.WWE 2K23");
		    printf("\n 4.NBA 2K21");
		    printf("\n 5.Exit");
		    printf("\n Please Enter Your Game no:  ");
		    scanf("%d",&spgamespc);
		    switch (spgamespc)
			{
				case 1:
					printf("\n Game You Like Is : CRICKET 22 ");
					break;

				case 2:
					printf("\n Game You Like Is : FIFA 23 ");
					break;

				case 3:
					printf("\n Game You Like Is : WWE 2K23 ");
					break;

				case 4:
					printf("\n Game You Like Is : NBA 2K21 ");
					break;
				case 5:
					printf("\n Thank You, Have a Good Day");
					break;

			}
		    break;

	     case 5:
		    printf("\n Thank You, Have a Good Day");
		    break;

	}
	break;

    case 2:
	printf("\n Game Categories ");
	printf("\n 1.Action Games");
	printf("\n 2.Racing Games");
	printf("\n 3.Puzzle Games");
	printf("\n 4.Sports Games");
	printf("\n 5.Exit");
	printf("\n Please Enter Your Game Category:  ");
	scanf("%d",&typeformobile);
	switch (typeformobile)
	{
	      case 1:
		    printf("\n ACTION GAMES");
		    printf("\n 1.BATTLEGROUNDS MOBILE INDIA");
		    printf("\n 2.MINI MILITIA");
		    printf("\n 3.SPIDER FIGHTER 2");
		    printf("\n 4.FREE FIRE MAX");
		    printf("\n 5.Exit");
		    printf("\n Please Enter Your Game no:  ");
		    scanf("%d",&acgamesmob);
		    switch (acgamesmob)
			{
				case 1:
					printf("\n Game You Like Is : BATTleGROUNDS MOBILE INDIA ");
					break;

				case 2:
					printf("\n Game You Like Is : MINI MILITIA ");
					break;

				case 3:
					printf("\n Game You Like Is : SPIDER FIGHTER 2 ");
					break;

				case 4:
					printf("\n Gam You Like Is : FREE FIRE MAX ");
					break;
				case 5:
					printf("\n Thank You, Have a Good Day");
					break;

			}
		    break;

	     case 2:
		    printf("\n RACING GAMES");
		    printf("\n 1.ASPHALT 9");
		    printf("\n 2.TRAFFIC RIDER");
		    printf("\n 3.Dr.Driving");
		    printf("\n 4.HILL CLIMB RACING");
		    printf("\n 5.Exit");
		    printf("\n Please Enter Your Game no:  ");
		    scanf("%d",&rcgamesmob);
		    switch (rcgamesmob)
			{
				case 1:
					printf("\n Game You Like Is : ASPHALT 9 ");
					break;

				case 2:
					printf("\n Game You Like Is : TRAFFIC RIDER ");
					break;

				case 3:
					printf("\n Game You Like Is : Dr.Driving ");
					break;

				case 4:
					printf("\n Game You Like Is : HILL CLIMB RACING ");
					break;
				case 5:
					printf("\n Thank You, Have a Good Day");
					break;

			}
		    break;

	     case 3:
		    printf("\n PUZZLE GAMES");
		    printf("\n 1.BRAIN OUT");
		    printf("\n 2.IQ BOOST");
		    printf("\n 3.BUBBLE SHOOTER");
		    printf("\n 4.PULL THE PIN");
		    printf("\n 5.Exit");
		    printf("\n Please Enter Your Game no:  ");
		    scanf("%d",&pugamesmob);
		    switch (pugamesmob)
			{
				case 1:
					printf("\n Game You Like Is : BRAIN OUT ");
					break;

				case 2:
					printf("\n Game You Like Is : IQ BOOST ");
					break;

				case 3:
					printf("\n Game You Like Is : BUBBLE SHOOTER ");
					break;

				case 4:
					printf("\n Game You Like Is : PULL THE PIN ");
					break;
				case 5:
					printf("\n Thank You, Have a Good Day");
					break;

			}
		   break;

	     case 4:
		    printf("\n SPORTS GAMES");
		    printf("\n 1.WORLD CRICKET CHAMPIONSHIP 3");
		    printf("\n 2.FIFA SOCCER ");
		    printf("\n 3.CARROM KING");
		    printf("\n 4.SACHIN SAGA");
		    printf("\n 5.Exit");
		    printf("\n Please Enter Your Game no:  ");
		    scanf("%d",&spgamesmob);
		    switch (spgmesmob)
			{
				case 1:
					printf("\n Game You Like Is : WORLD CRICKET CHAMPIONSHIP 3 ");
					break;

				case 2:
					printf("\n Game You Like Is : FIFA SOCCER ");
					break;

				case 3:
					printf("\n Game You Like Is : CARROM KING ");
					break;

				case 4:
					printf("\n Game You Like Is : SACHIN SAGA ");
					break
				case 5:
					printf("\n Thank You, Have a Good Day");
					break;

			}

	     case 5:
		    printf("\n Thank You, Have a Good Day");
		    break;
	}
	    break;

    case 3:
	printf("\n Thank You, Have a Good Day");
	break;
    }
    getch();
}
