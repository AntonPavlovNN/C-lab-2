#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"
#define NUM_OF_PASS 10

int main()
{
	srand(time(0));
	char buf[10];
	for (int i = 0; i < NUM_OF_PASS; ++i)
	{
		printf("%s\n", password(buf));
	}
	return 0;
}