#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"

int main()
{
	int value = 0;
	int count = 0;
	srand(time(0));
	int secret = rand() % 100 + 1;

	while (value != secret)
	{
		count++;
		printf("Enter a value: ");
		scanf("%d", &value);
		int result = turn(value, secret);
		if (result == 1)
			printf("Less\n");
		else if (result == 0)
			printf("Guess the number %d for %d attempts.\n", secret, count);
		else if (result == -1)
			printf("More\n");
	}

	return 0;
}