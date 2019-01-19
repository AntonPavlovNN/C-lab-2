#include <stdio.h>
#include <stdlib.h>
#include "task2.h"
#include <time.h>

int main()
{
	srand(time(0));
	int secret = rand() % 101;
	int value = 0;
	printf("Enter your number: ");
	scanf("%d", &value);
	
	while (turn(value, secret) != 0)
	{
		if (turn(value, secret)>0)
		{
			printf("Your number is more than I guess! Enter another number: ");
			scanf("%d", &value);
		}
		else 
		{
			printf("Your number in less than I guess! Enter another number: ");
			scanf("%d", &value);
		}
	}
	printf("Guess right!");

	return 0;
}