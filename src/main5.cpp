#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"


int main()
{
	int i;
	char line[100];

	srand(time(0));

	for (i = 0; i < 10; i++)
	{
	 printf("%s\n", password(line));
	}

	getchar();

	return 0;
}