#include <stdio.h>
#include "task5.h"
#include <time.h>
#include <stdlib.h>

int main()
{
	char line[10];
	srand(time(0));

	for (int j = 0; j < 10;j++)
		printf("%s\n", password(line));

	return 0;
}