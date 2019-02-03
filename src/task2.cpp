#include <stdio.h>
#include "task2.h"

void clean_stdin()
{
	char c;
	do {
		c = getchar();
	} while (c != '\n' && c != EOF);
}

int turn(int value, int secret)
{
	if (value > secret)
	{
		puts("Your number is bigger than secret!\n"); 
		return 1;
	}

	else if (value < secret)
	{
		puts("Your number is smaller than secret!\n"); 
		return -1;
	}
	else
	{
		puts("Congratulate you! You have guessed the number!\n");
		return 0;
	}
}