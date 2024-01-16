/* Programmer : KRISH VORA M.
   Roll No.   : 446
   College    : Sutex Bank College Of Computer Applications & Science
   Title      : Menu Dirven Porgram to choice best ride for you
*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int choice,tob,toc,suv,sedan,sport,hyper,std,spo,scoter,ebike;

    clrscr();
    printf("\n Welcome to Program To Select Best Ride for You ");
    printf("\n 1.CAR");
    printf("\n 2.BIKE");
    printf("\n 3.Exit");
    printf("\n Please Enter Your Choice:  ");
    scanf("%d",&choice);


    switch (choice)
    {
    case 1:
	printf("\n CAR Categories ");
	printf("\n 1.SUV");
	printf("\n 2.SEDAN ");
	printf("\n 3.SPORT CAR ");
	printf("\n 4.HYPER CAR");
	printf("\n 5.Exit");
	printf("\n Please Enter Your Game Category:  ");
	scanf("%d",&toc);
	switch (toc)
	{

	      case 1:
		    printf("\n SUV ");
		    printf("\n 1.Creta");
		    printf("\n 2.TATA Nexon");
		    printf("\n 3.XUV 700");
		    printf("\n 4.THAR");
		    printf("\n 5.Exit");
		    printf("\n Please Enter Your Favourite Car no:  ");
		    scanf("%d",&suv);
		    switch (suv)
			{
				case 1:
					printf("\n Your Favourite Car is : Creta  ");
					break;

				case 2:
					printf("\n Your Favourite Car is : TATA Nexon  ");
					break;

				case 3:
					printf("\n Your Favourite Car is : XUV 700 ");
					break;

				case 4:
					printf("\n Your Favourite Car is : THAR ");
					break;


				case 5:
					printf("\n Thank You I hope You get Best Choice  ,Have a Good Day");
					break;

			}
		    break;

	     case 2:
		    printf("\n SEDAN");
		    printf("\n 1.Honda City");
		    printf("\n 2.TATA tigor");
		    printf("\n 3.Skoda Slavia");
		    printf("\n 4.Verna");
		    printf("\n 5.Exit");
		    printf("\n Please Enter Your Game no:  ");
		    scanf("%d",&sedan);
		    switch (sedan)
			{

				case 1:
					printf("\n Your Favourite Car is : Honda City   ");
					break;

				case 2:
					printf("\n Your Favourite Car is : TATA tigor  ");
					break;


				case 3:
					printf("\n Your Favourite Car is : Skoda Slavia ");
					break;


				case 4:
					printf("\n Your Favourite Car is : Verna ");
					break;


				case 5:
					printf("\n Thank You I hope You get Best Choice  ,Have a Good Day");
					break;
			}
		    break;



	     case 3:
		    printf("\n Sports car");
		    printf("\n 1.Jagur F type");
		    printf("\n 2.Audi R8");
		    printf("\n 3.BMW Z4");
		    printf("\n 4.Nissan GTR");
		    printf("\n 5.Exit");
		    printf("\n Please Enter Your Game no:  ");
		    scanf("%d",&sport);
		    switch (sport)
			{
				case 1:
					printf("\n Your Favourite Car is : Jagur F type  ");
					break;


				case 2:
					printf("\n Your Favourite Car is : Audi R8 ");
					break;


				case 3:
					printf("\n Your Favourite Car is : BMW Z4 ");
					break;


				case 4:
					printf("\n Your Favourite Car is : Nissan GTR ");
					break;


				case 5:
					printf("\n Thank You I hope You get Best Choice , Have a Good Day");
					break;



			}
		    break;


	     case 4:
		    printf("\n Hyper car");
		    printf("\n 1.Porsche 911");
		    printf("\n 2.HURACAN Evo ");
		    printf("\n 3.Ferari F8");
		    printf("\n 4.TESALA ROADSTAR");
		    printf("\n 5.Exit");
		    printf("\n Please Enter Your Game no:  ");
		    scanf("%d",&hyper);
		    switch (hyper)
			{


				case 1:
					printf("\n Your Favourite Car is : Porsche 911   ");
					break;



				case 2:
					printf("\n Your Favourite Car is : HURACAN Evo  ");
					break;



				case 3:
					printf("\n Your Favourite Car is : Ferari F8 ");
					break;



				case 4:
					printf("\n Your Favourite Car is : TESALA ROADSTAR ");
					break;


				case 5:
					printf("\n Thank You I hope You get Best Choice , Have a Good Day");
					break;

			}
		    break;

	     case 5:
		    printf("\n Thank You, Have a Good Day");
		    break;




	}
	break;




    case 2:
	printf("\n BIKE Categories ");
	printf("\n 1.Standed");
	printf("\n 2.Scooter ");
	printf("\n 3.Sport bike ");
	printf("\n 4.E-BIKE ");
	printf("\n 5.Exit");
	printf("\n Please Enter Your Game Category:  ");
	scanf("%d",&tob);
	switch (tob)
	{



	      case 1:
		    printf("\n standed ");
		    printf("\n 1.Honda shine");
		    printf("\n 2. Splendor plus");
		    printf("\n 3.Royal Enfiled 360");
		    printf("\n 4.Bajaj Pulsar");
		    printf("\n 5.Exit");
		    printf("\n Please Enter Your Favourite Car no:  ");
		    scanf("%d",&std);
		    switch (std)
			{

				case 1:

					printf("\n Your Favourite Car is : Honda shine  ");
					break;


				case 2:
					printf("\n Your Favourite Car is : Splendor plus ");
					break;

				case 3:

					printf("\n Your Favourite Car is : Royal Enfiled 360 ");
					break;



				case 4:
					printf("\n Your Favourite Car is : Bajaj Pulsar ");
					break;


				case 5:
					printf("\n Thank You I hope You get Best Choice  ,Have a Good Day");
					break;




			}
		    break;

	     case 2:
		    printf("\n Scooter");
		    printf("\n 1.TVS Jupiter");
		    printf("\n 2. Access 125");
		    printf("\n 3.Mastro");
		    printf("\n 4.Fascino");
		    printf("\n 5.Exit");
		    printf("\n Please Enter Your Favourite Car no::  ");
		    scanf("%d",&scoter);
		    switch (scoter)
			{


				case 1:

					printf("\n Your Favourite Car is : TVS Jupiter  ");
					break;

				case 2:

					printf("\n Your Favourite Car is : Access 125 ");
					break;

				case 3:

					printf("\n Your Favourite Car is : Mastro  ");
					break;

				case 4:

					printf("\n Your Favourite Car is : Fascino  ");
					break;
				case 5:

					printf("\n Thank You I hope You get Best Choice  ,Have a Good Day");
					break;
			}
		    break;

	     case 3:
		    printf("\n Sport Bike");
		    printf("\n 1.");
		    printf("\n 2.");
		    printf("\n 3.");
		    printf("\n 4.");
		    printf("\n 5.Exit");
		    printf("\n Please Enter Your Favourite Car no::  ");
		    scanf("%d",&sport);
		    switch (sport)
			{

				case 1:

					printf("\n Your Favourite Car is : KTM Duke  ");
					break;


				case 2:
					printf("\n Your Favourite Car is : Ninja 300 ");
					break;


				case 3:
					printf("\n Your Favourite Car is :Niza ZX 10R ");
					break;


				case 4:
					printf("\n Your Favourite Car is : KTM RC 390");
					break;

				case 5:
					printf("\n Thank You I hope You get Best Choice , Have a Good Day");
					break;

			}
		    break;

	     case 4:

		    printf("\n E-BIKE");
		    printf("\n 1. TVS iQBE");
		    printf("\n 2. OLA s1 ");
		    printf("\n 3. OLA s2 pro");
		    printf("\n 4. Okinava");
		    printf("\n 5.Exit");
		    printf("\n Please Enter Your Favourite Car no::  ");
		    scanf("%d",&ebike);
		    switch (ebike)
			{

				case 1:
					printf("\n Your Favourite Car is : TVS iQBE    ");
					break;


				case 2:
					printf("\n Your Favourite Car is : OLA s1  ");
					break;


				case 3:
					printf("\n Your Favourite Car is : OLA s2 pro ");
					break;


				case 4:
					printf("\n Your Favourite Car is : Okinava ");
					break;

				case 5:
					printf("\n Thank You I hope You get Best Choice , Have a Good Day");
					break;

		    }



	     case 5:
		    printf("\n Thank You I hope You get Best Choice , Have a Good Day");
		    break;

	}
		break;

    case 3:
	printf("\n Thank You I hope You get Best Choice , Have a Good Day");
	break;
     }
       getch();

}