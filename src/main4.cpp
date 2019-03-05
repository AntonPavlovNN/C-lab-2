#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"

#define LENGHT 5

int main()
{
	srand(time(0));
	char line[LENGHT + 1];
	/*printf("Enter line([A-z][0-9]):");
	scanf("%s", line);*/
	for (int i = 0; i < LENGHT; ++i)
	{
		switch (rand() % 3)
		{
		case 0:	line[i] = rand() % ('9' - '0' + 1) + '0'; break;
		case 1: line[i] = rand() % ('z' - 'a' + 1) + 'a'; break;
		case 2: line[i] = rand() % ('Z' - 'A' + 1) + 'A'; break;
		}
	}
	line[LENGHT] = '\0';
	printf("Source: %s\n", line);
	printf("Result: %s\n", process(line));
	return 0;
}