#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"

int main()
	{
	int value=0;
	srand(time(NULL));
	int secret = rand() % 100+1;

	while (1)
	{
		printf("Input a value: ");
		scanf("%d", &value);
		
		if (turn(value, secret) == 1)
			printf("Your value is bigger! Try again\n");
		else if (turn(value, secret) == -1)
			printf("Your value is too low! Try again\n");
		else
		{
			printf("Yes! Your value=%d == secret=%d\n", value,secret);
			break;
		}
		putchar('\n');
	}
	return 0;
	}


