#include <stdlib.h>
#define LEN 8

char * password(char * line)
{
	for (int i = 0; i < LEN; i++)
	{
		int random = rand() % 3;
		if (random == 0)
			line[i] = rand() % ('z' - 'a' + 1) + 'a';
		else if (random == 1)
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
		else if (random == 2)
			line[i] = rand() %('9' - '0' +1) + '0';
	}
	line[LEN] = '\0';
	return line;
}