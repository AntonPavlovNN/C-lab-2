#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"

int main()
{
	char line[9] = { 0 };
	srand(time(0));

	for (int i = 0; i < 10; i++)
		printf("%s\n", password(line));
	return 0;
}