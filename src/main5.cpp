#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"

int main()
{
	char line[10];
	

	for (int number = 0; number < 10; number++)
	{
		int plus = time(NULL) + 1;
		while (time(NULL) < plus);
		printf("%s\n", password(line));
	}

	getchar();
	return 0;
}

