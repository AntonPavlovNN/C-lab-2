#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"

int main()
{
	srand(time(NULL));
	int value, secret;
	value = 0;
	secret = rand() % 100;
	while (secret != value) 
	{
		printf("Enter a number from 1 to 100: ");
		scanf("%d", &value);
		if (value < secret)
			printf("Try mach\n");
		else if (value > secret)
			printf("Try less\n");
			
	}
	printf("YAHOOO!\n");
	return 0;
}