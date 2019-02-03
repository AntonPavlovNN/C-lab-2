#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"

int main()
{
	srand(time(0));
	rand();
	int secret = rand() % 100 + 1, value;
	printf("input your number (between 1 and 100): ");
	while (1)
	{
		scanf("%d", &value);
		if (turn(value, secret) == 0)
		{
			printf("you win\n");
			break;
		}
		if (turn(value, secret) > 0)
			printf("your number is bigger\n");
		if (turn(value, secret) < 0)
			printf("your number is smaller\n");
		printf("try again: ");
	}
	return 0;
}