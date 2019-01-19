#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"

int main()
{
	srand(time(0));
	int secret = 0;
	int value = 0;
	secret  = rand()% 100+1;
	printf("Enter your number(from 1 to 100): ");
	scanf("%d", &value);
	while (1)
	{
		if (turn(value, secret) == 0)
		{
			printf("Guessed!");
			return 0;
		}
		else if (turn(value, secret) == -1)
		{
			printf("More.\nEnter new number: ");
			scanf("%d", &value);
		}
		else if (turn(value, secret) == 1)
		{
			printf("Less.\n Enter new number: ");
			scanf("%d", &value);
		}
	}

	return 0;
}