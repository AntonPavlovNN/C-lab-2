#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"

int main()
{
	int value = 0, secret = 0, count;
	srand(time(0));
	printf("Guess the number!\n");
	printf("Enter your number: ");
	scanf("%d", &value);
	secret = rand() % 100 + 1;
	for (count = 1; turn(value, secret) != 0; count++)
	{
		if (turn(value, secret) == -1)
			printf("Your number is < than we guess!\n");
		else
			printf("Your number is > than  we guess!\n");
		printf("Enter number again: ");
		scanf("%d", &value);
	}
	printf("Congratulations, you guessed the hidden number %d in %d moves!", secret, count);
	return 0;
}