#include "task5.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char main()
{
	char line[10];
	srand(time(NULL));
	for (int j = 0; j < 10; j++)
	{
		password(line);
		printf("%s\n", line);
		unsigned int retTime = time(0) + 1;
		while (time(0) < retTime);
	}
return 0;
}