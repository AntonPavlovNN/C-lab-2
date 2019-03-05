#include <stdio.h>
#include "task2.h"
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(0));
	int value = 0, secret = 0, count;
	secret = rand() % 101;
	printf("We made a secret number (from 1 to 100)!\nTry to guess the number: ");
	scanf("%d", &value);
	while (turn(value, secret) != 0)
	{
		if (turn(value, secret) > 0)
		printf("Your number is more than secret\n\n");
		else
		printf("Your number is less than secret\n\n");
		printf("Enter number again: ");
		scanf("%d", &value);
	}
	printf("Congrats, you guessed the secret number %d\n", secret);
	return 0;
}