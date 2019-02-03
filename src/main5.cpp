#include <stdio.h>
#include "task5.h"

int main()
{
	char line[9];
	for (int j = 0; j < 10; j++)
	{
		printf("%s\n", password(line));
	}
	return 0;
}