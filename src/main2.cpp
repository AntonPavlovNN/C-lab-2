#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"

main()
{
	int number = 0, secret = 0;
	srand(time(0));
	secret = rand() % 100 + 1;
	printf("Let's play! You should guess the number. Please, enter an integer number from 1 to 100: ");
	scanf("%d", &number);

	while (turn(number, secret) != 0)
	{
		if (turn(number, secret) < 0)
		{
			printf("\nYour number is less than the secret number. Please, try again: ");
			scanf("%d", &number);
		}
		else if (turn(number, secret) > 0)
		{
			printf("\nYour number is over than the secret number. Please, try again: ");
			scanf("%d", &number);
		}
	} 
	printf("\nYou won! The secret number is %d\n", secret);
	return 0;
}