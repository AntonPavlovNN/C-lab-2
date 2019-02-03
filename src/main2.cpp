#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"

int main()
{
	int secret, value, result=1;
	srand (time(NULL));
	secret = rand() % 100 + 1;
	printf("Enter a number\n");
	scanf("%d", &value);
	do
	{
		result = turn(value, secret);
		if (result < 0)
		{
			printf("More\n");
			scanf("%d", &value);
		}
		if (result > 0)
		{
			printf("Less\n");
			scanf("%d", &value);
		}
	} 	while (result != 0);
	printf("Congratulations, you guessed it!\n");
	return 0;
}