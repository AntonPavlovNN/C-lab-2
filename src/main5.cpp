#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"

int main()
{
	const int len = 9;
	srand(time(NULL));
	char line[len];
	const int lines = 10;
	for (int i=0;i<lines;i++)
		printf("%s\n", password(line));
	return 0;
}