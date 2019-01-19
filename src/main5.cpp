#include <stdio.h>
#include <time.h>
#include "task5.h"

int main(void)
{
	char line[10];
	for (int i = 0; i < 10; i++)
	{
		unsigned int retTime = time(0) + i;
		while (time(0) < retTime);
		printf("%s\n", password(line));
	}
		
	return 0;
}