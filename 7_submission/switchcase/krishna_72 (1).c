/******************
NAME:- Hirpara Krishna A.
Roll no. :- 472
********************/
#include<stdio.h>
#include<conio.h>
void main()
{
    int choice,movie,food,bike;
    clrscr();
    printf (" welcome to program\n");
    printf ("Enter for day\n");
    printf("1 : MONDAY\n");
    printf("2 : TUESDAY\n");
    printf("3 : WEDNESDAY\n");
    printf("4 : THURSDAY\n");
    printf("5 : FRIDAY\n");
    printf("6 : SATURDAY\n");
    printf("7 : SUNDAY\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("____________________\n");
        printf ("1:3ekka\n") ;
        printf ("2:RRR\n") ;
        printf ("3:Gader2\n");
        printf ("4:Laxmii\n") ;
        printf ("5:Pathaan\n");
        printf ("please choose your favorite movie\n") ;
        scanf("%d", &movie) ;
        switch ( movie)
        {
        case 1:
            printf (" you want to see 3ekka\n") ;
            break;
        case 2:
            printf (" you want to see RRR\n") ;
            break;
        case 3:
            printf (" you want to see Gader2\n") ;
            break;
        case 4:
            printf ("you want to see Laxmii\n") ;
            break;
        case 5:
            printf (" you want to see Pathaan\n") ;
            break;
        default :
            printf (" you can see RRR:\n") ;
            break;
        }
        break;
    case 2:
        printf ("___________________\n") ;
        printf (" enter for Food types\n") ;
        printf ("1: India\n") ;
        printf ("2: Chinese\n") ;
        printf ("3: South Indian\n") ;
        printf ("4: Maharastrian\n") ;
        printf ("5: Italian\n");
        printf ("6: American\n");
        printf ("please choose your favorite Food\n") ;
        scanf ("%d", &food);
        switch (food)
        {
        case 1:
            printf (" India Food\n") ;
            printf ("1: Khaman\n") ;
            printf ("2: Thepla\n") ;
            printf ("3: Khandvi\n") ;
            printf ("4: Undhiyu\n") ;
            break;
        case 2:
            printf ("Chinese Food\n") ;
            printf ("1: Manchurian\n") ;
            printf ("2: paneer sezwan\n") ;
            printf ("3: NNodules\n") ;
            printf ("4: Chinese Hot Pot\n") ;
            break;
        case 3:
            printf ("South Indian\n") ;
            printf ("1: Masala Dosa\n") ;
            printf ("2: Uttapam\n") ;
            printf ("3: Medu Vada\n") ;
            printf ("4: Idli\n") ;
            break;
        case 4:
            printf ("Maharastrian Food\n") ;
            printf ("1: Pav Bhaji\n") ;
            printf ("2: Vada Pav \n") ;
            printf ("3: Puran Poli\n") ;
            printf ("4: Misal Pav \n") ;
            break;
        case 5:
            printf (" Italian Food\n") ;
            printf ("1: Pizza\n") ;
            printf ("2: Pasta\n") ;
            printf ("3: Risotto\n") ;
            printf ("4: Italian Cheese\n") ;
            break;
        case 6:
            printf (" American Food\n") ;
            printf ("1: Apple Pie\n") ;
            printf ("2: Pizza\n") ;
            printf ("3: Cheeseburger\n") ;
            printf ("4: coranbread\n") ;
            break;
        default:
            printf ("another Food \n") ;
            break;
        }
        break;
    case 3:
        printf ("____________\n") ;
        printf ("please enter your favorite bike:") ;
        scanf  ("%d",& bike) ;
        switch (bike)
        {
        case 1:
            printf ("1 suzuki\n") ;
            break;
        case 2:   
            printf ("2 BMW\n") ;
            break;
        case 3:   
            printf ("3: Audi\n") ;
            break;
        case 4:   
            printf ("4: Volvo\n") ;
            break;
        case 5:   
            printf ("5: Thar \n") ;
            break;
        case 6:   
            printf ("6: Honda\n") ;
            break;
            }
        default :
            printf ("As your wish \n") ;
            break;
        }

    getch();
}



















    