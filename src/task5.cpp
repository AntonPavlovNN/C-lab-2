#include <stdlib.h>
#define N 8

char*password(char*line)
{
	int i;

	for (i = 0; i < N ; i++)
	{
		int symbol = rand() % 3;
		if (symbol == 0)
			line[i] = rand() % ('9' - '0' + 1) + '0';
		else if (symbol == 1)
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
		else if (symbol == 2)
			line[i] = rand() % ('z' - 'a' + 1) + 'a';
	}
	line[N]='\0';
	return line;
}
