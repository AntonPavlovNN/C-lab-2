#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"

int main()
{
	int value = 0;
	int secret = 0;
	srand (time(NULL));
	secret = rand() % 100+1;

	for (printf("Enter number: \n"), scanf("%d", &value); value != secret; scanf("%d", &value))
	{
		turn(value, secret);
		if (turn(value, secret) == 1)
			printf("More. Enter number: \n");
		else if (turn(value, secret) == -1)
			printf("Less. Enter number: \n");
	}
	printf("Guessed!");

	getchar();
	getchar();
	return 0;
}