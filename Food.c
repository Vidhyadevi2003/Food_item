#include<stdio.h>
#include<string.h>
int main()
{
	int choice;
	char F_item[20],price[5];
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: strcpy(F_item,"Pizza");
		strcpy(price,"Rs 239");
		printf("Food item- ");
		puts(F_item);
		printf("\n Price- ");
		puts(price);
		break;
		case 2: strcpy(F_item,"Burger");
		strcpy(price,"Rs 129");
		printf("Food item- ");
		puts(F_item);
		printf("\n Price- ");
		puts(price);
		break;
		case 3: strcpy(F_item,"Pasta");
		strcpy(price,"Rs 179");
		printf("Food item- ");
		puts(F_item);
		printf("\n Price- ");
		puts(price);
		break;
		case 4: strcpy(F_item,"French fries");
		strcpy(price,"Rs 99");
		printf("Food item- ");
		puts(F_item);
		printf("\n Price- ");
		puts(price);
		break;
		case 5: strcpy(F_item,"Sandwich");
		strcpy(price,"Rs 149");
		printf("Food item- ");
		puts(F_item);
		printf("\n Price- ");
		puts(price);
		break;
		default: printf("Not Available!!");
		break;
	}
	return 0;
}
			
	
