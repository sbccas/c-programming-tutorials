//NESTED SWITCHCASE PROGRAMM

#include <stdio.h>
#include<conio.h>
void main() {
    int choice;
    int c, s, total = 0, gt = 0, t = 0, o = 0, l = 0, a = 0, r = 0, n,u, score;
    clrscr();
    printf("Menu:\n");
    printf("1. RAJ CINEMA\n");
    printf("2. ORDER FOOD\n");
    printf("3. PLAY GAMES\n");
    printf("4. COUNTRY'S INFORMATION\n");
    printf("5. Exit program\n");
    
    do {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        case 1:
        {
                printf("WELCOME TO RAJ CINEMA \n");
                printf("1. Gader 2\n"); 
                printf("2. Javan\n"); 
                printf("3. 3 Akka\n"); 
                printf("4. OMG 2\n");
                printf("Enter choice: ");
                scanf("%d", &c);
        
                switch(c)
                 {

                  case 1:
                    printf("\nYou select Gader 2");
                    printf("\nPrice: 350rs.");
                    printf("\nBook your seat:");
                    scanf("%d", &s);
                    total = 350 * s;
                    printf("\nYour total price is: %d", total);
                    break;
                
                 case 2:

                    printf("\nYou select Jivan");
                    printf("\nPrice: 350rs.");
                    printf("\nBook your seat:");
                    scanf("%d", &s);
                    total = 350 * s;
                    printf("\nYour total price is: %d", total);
                    break;

                  case 3:

                    printf("\nYou select 3 Akka");
                    printf("\nPrice: 200rs."); // Fixed the price
                    printf("\nBook your seat:");
                    scanf("%d", &s);
                    total = 200 * s;
                    printf("\nYour total price is: %d", total);
                    break;
                
                    case 4:
                    printf("\nYou select OMG 2");
                    printf("\nPrice: 150rs."); // Fixed the price
                    printf("\nBook your seat:");
                    scanf("%d", &s);
                    total = 150 * s;
                    printf("\nYour total price is: %d", total);
                    break;

                    default:
                    printf("wrong choice");
               
                    
                }
                break;

            case 2:
                printf("WELCOME TO HOTEL DARSHAN\n");
                printf("Menu card\n");
                printf("Dish name     Rs\n");
                printf("1. Dosa         200\n");
                printf("2. Jini roll    150\n");
                printf("3. Maisur       100\n");
                printf("4. Cold drinks   20\n");
                printf("5. Grand total\n");
                printf("Enter your choice: ");
                scanf("%d", &c);
                switch(c)
                {
                case 1:
                 {
                  
                    printf("You select Dosa\n");
                    printf("Enter quantity: ");
                    scanf("%d", &s);
                    t = 200 * s;
                    printf("Total price is: %d", t);
                    break;
                } 
                
                case 2:
                
                {
                    printf("You select Jini roll");
                    printf("Enter quantity: ");
                    scanf("%d", &s);
                    o = 150 * s;
                    printf("Total price is: %d", o);
                    break;
                }
                 case 3:
                  {
                    printf("You select Maisur");
                    printf("Enter quantity: ");
                    scanf("%d", &s);
                    a = 100 * s;
                    printf("Total price is: %d", a);
                    break;
                } 

                case 4:                
                 {
                    printf("You select Cold drinks");
                    printf("Enter quantity: ");
                    scanf("%d", &s);
                    l = 20 * s;
                    printf("Total price is: %d", l);
                    break;
                }
                
                 case 5:
                 
                  {
                    gt = t + o + a + l;
                    printf("Grand total is: %d", gt);
                    break;
                } 

                default:
                {
                  printf("wrong choice");
                }
                
                }
                break;
            case 3:
                printf("WELCOME TO GAMEZONE\n");
                printf("Game list    Rs\n");
                printf("1. Jumping    249/-\n");
                printf("2. DodgeBall  39/-\n");
                printf("3. Basketball 349/-\n");
                printf("4. Foam Pit   369/-\n");
                printf("IF YOU WIN THE GAMES YOU WILL GET 50 PERCENTAGE DISCOUNT\n");
                printf("Enter choice: ");
                scanf("%d", &c);
                switch(c)
                {
                case 1:
                 {
                    printf("You select Jumping");
                    printf("YOU CAN'T GET DISCOUNT IN THIS GAME\n");
                    printf("Enter hours: ");
                    scanf("%d", &n);
                    o = n * 249;
                    printf("Your amount is: %d", o);
                    break;
                } 
               case 2:
                 {
		    printf("You select DodgeBall");
		    printf("YOU CAN'T GET DISCOUNT IN THIS GAME\n");
                    printf("Enter how many times you want to play: ");
                    scanf("%d", &n);
                    l = n * 39;
                    printf("Your amount is: %d", l);
                    break;
                } 
                case 3:

                {
                    printf("You select Basketball\n");
                    printf("Enter how many times you want to play: ");
                    scanf("%d", &n);
                    printf("Enter achieved score: ");
                    scanf("%d", &score);
                   if (score < 10) {
                        l = n * 349;
                        printf("Your amount is: %d", l);
                    } else {
                        printf("CONGRATS YOU GET 50 PERCENTAGE DISCOUNT\n");
                        l = (n * 349) * 50 / 100;
                        printf("Your amount is: %d", l);
                    }
                    break;
                }
                 case 4:
                  {
                    printf("FOAM PIT\n");
                    printf("YOU CAN'T GET DISCOUNT IN THIS GAME\n");
                    printf("Enter hours: ");
                    scanf("%d", &n);
                    r = n * 369;
                    printf("Your amount is: %d", r);
                    break;
                } 
                default:
                {
                  printf("wrong choice");
                }
                }
                break;

            case 4:
                printf("\nEnter your favorite city whose knowledge you want to get\n");
                printf("1. Switzerland\n");
                printf("2. New York\n");
                printf("3. Paris\n");
                printf("4. Bharat\n");
                printf("5. Japan\n"); // Fixed the spelling
                printf("6. Spain\n"); // Fixed the spelling
                printf("Enter your choice: ");
                scanf("%d", &c);
                switch(c)
                {
                case 1:
                
                 {
                    printf("\nWELCOME TO SWITZERLAND INFORMATION SECTION");
                    printf("\n------------------------------------------------------------------");
                    printf("\nOne of the best countries for a picnic");
                    printf("\nSwitzerland, officially the Swiss Confederation, is a");
                    printf("\nlandlocked country located at the confluence of Western, Central");
                    printf("\n and Southern Europe.");
                    printf("\nIt is bordered by Italy to the south, France to the west,");
                    printf("\n Germany to the north and Austria and Liechtenstein to the east.");
                    printf("\nIt has four main linguistic and cultural regions: German,");
                    printf("\n French, Italian and Romansh.");
                    break;
                } 
                
                case 2:
                
                 {
                    printf("\nWELCOME TO NEW YORK INFORMATION SECTION");
                    printf("\n------------------------------------------------------------------------");
                    printf("\nNew York, often called New York City[a] or NYC, is the most");
                    printf("\npopulous city in the United States.");
                    printf("\nNYC is more than twice as populous as Los Angeles, the nation's");
                    printf("\nsecond-largest city.");
                    printf("\nNew York City is in the southern tip of New York State and is");
                    printf("\nsituated on one of the world's largest natural harbors.");
                    break;
                }
                 
                 case 3:

                  {
                    printf("\nWELCOME TO PARIS INFORMATION SECTION");
                    printf("\n------------------------------------------------------------------------");
                    printf("\nParis, France's capital, is a major European city and a global center");
                    printf("\nfor art, fashion, gastronomy and culture.");
                    printf("\nIts 19th-century cityscape is crisscrossed by wide boulevards and the");
                    printf("\nRiver Seine.");
                    printf("\nIn its centuries of growth Paris has for the most part retained");
                    printf("\nthe circular shape of the early city.");
                    printf("\nParis is positioned at the center of the Île-de-France region, which");
                    printf("\nis crossed by the Seine, Oise, and Marne rivers.");
                    break;
                }
                 case 4:

                  {
                    printf("\nWELCOME TO BHARAT INFORMATION SECTION");
                    printf("\n------------------------------------------------------------------------");
                    printf("\nIndia, officially the Republic of India (ISO: Bhārat Gaṇarājya),[21]");
                    printf("\nis a country in South Asia.");
                    printf("\nIt is the seventh-largest country by area; the most populous");
                    printf("\ncountry as of June 2023.");
                    printf("\nModern humans arrived on the Indian subcontinent from Africa no");
                    printf("\nlater than 55,000 years ago.");
                    break;
                } 
                case 5:
                {
                    printf("\nWELCOME TO JAPAN INFORMATION SECTION");
                    printf("\n------------------------------------------------------------------------");
                    printf("\nJapan, island country lying off the east coast of Asia.");
                    printf("\nThe national capital, Tokyo (Tōkyō), in east-central Honshu, is one of");
                    printf("\nthe world’s most populous cities.");
                    printf("\nThe Japanese landscape is rugged, with more than four-fifths of the land");
                    printf("\nsurface consisting of mountains.");
                    break;
                }
                default:
                {
                  printf("wrong choice");
                }
                }
                break;

            case 5:
            
                printf("--Exit program--\n");
                break;

            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    } while (choice != 5);

    getch();

    }

