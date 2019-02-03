#include <stdio.h>
#include <time.h>
#include "task2.h"

int main(void)
{
	int secret, value = -1;

	secret = 1 + time(NULL) % 100;
	while (turn(value, secret) != 0)
	{
		printf("I made a number, guess it! enter a number from 1 to 100: ");
		scanf("%d", &value);
		if (turn(value, secret) > 0)
			printf("You number is too big\n");
		else if (turn(value, secret) < 0)
			printf("You number is too small\n");
	}
	printf("Guessed right!");
	return 0;
}