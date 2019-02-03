#include "task5.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(0));
	char line[SIZE + 1] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		printf("%s", password(line));
		putchar('\n');
	}
	return 0;
}