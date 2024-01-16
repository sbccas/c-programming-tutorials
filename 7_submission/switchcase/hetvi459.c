/* name : Hetavi solanki
roll no: 459
title: write a program for nested switch*/
#include<stdio.h>
#include<conio.h>
void main()
{
int choice;
int ch;
	printf("1:Sweets \n");
	printf("2:Snacks \n");
	printf("3:Fast Food \n");
	printf("4:exit \n");
	printf("Enter your choice \n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
		printf("\n Welcome to sweet shop \n");
		printf("\n 1: Laddoo ");
		printf("\n 2:milkcake ");
		printf("\n Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			printf("\n you purchase laddoo");
			break;
		case 2:
			printf("\n you purchase milkcake ");
			break;
		default:
			printf("\n Wrong choice");
		}
		break;
	case 2:

		printf("\n Welcome to Snacks shop \n");
		printf("\n 1: Lays ");
		printf("\n 2: kurkure ");
		printf("\n Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			printf("\n you purchase lays");
			break;
		case 2:
			printf("\n you purchase kurkure ");
			break;
		default:
			printf("\n Wrong choice");
		}
		break;
	case 3:
		printf("\n Welcome to fastfood corner \n");
		printf("\n 1: maggie ");
		printf("\n 2: macroni ");
		printf("\n Enter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			printf("\n you purchase maggie");
			break;
		case 2:
			printf("\n you purchase macroni ");
			break;
		default:
			printf("\n Wrong choice");
		}
		break;
	case 4:
		exit(1);
		}
		getch();
		}