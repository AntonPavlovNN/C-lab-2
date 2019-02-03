#include <stdlib.h>
#define len 8


char * password(char * line)
{
	int i, k, exch;

	for (i = 0; i < len / 3; i++)
		line[i] = rand() % ('Z' - 'A' + 1) + 'A';
	for (; i >= len / 3 && i < 2 * len / 3; i++)
		line[i] = rand() % ('9' - '0' + 1) + '0';
	for (; i >= 2 * len / 3 && i < len; i++)
		line[i] = rand() % ('z' - 'a' + 1) + 'a';
	for (int j = 0; j < len; j++)
	{
		k = rand() % len;
		exch = line[k];
		line[k] = line[len - 1 - k];
		line[len - 1 - k] = exch;
	}

	line[len] = '\0';

	return line;
}