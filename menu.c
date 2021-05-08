#include<stdio.h>
main()
{
	printf("what do you like to have\n1.french fries Rs=99\n2.sandwich Rs=149\n3.pasta Rs=179\n4.burger Rs=129\n5.pizza Rs=239\n");
	int choice;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("enjoy your french fries");
		break;
		case 2: printf("enjoy your sandwich");
		break;
		case 3: printf("enjoy your pasta");
		break;
		case 4: printf("enjoy your burger");
		break;
		case 5: printf("enjoy your pizza");
		break;
		default: printf("its not on the menu");	
	}
}
