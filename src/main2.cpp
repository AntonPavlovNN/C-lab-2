#include <stdio.h>
#include <stdlib.h>
#include "task2.h"
#include <time.h>

int main()
{
	srand(time(0));
	int value = 0, secret = 0, result = 1;
	secret = rand() % 100;
	while (result)
	{
		printf("Enter the number between 1 and 100:");
		scanf("%d", &value);
		result = turn(value, secret);
		if (result > 0)
			printf("More!\n");
		else if (result < 0)
			printf("Less!\n");
		else
			printf("You win!\n");
	}
	return 0;
}
