#include <stdlib.h>
#include <stdio.h>

char * password(char * line)
{
	const int len = 8;
	for (int i = 0; i < len; i++)
	{
		int group = rand() % 3;
		if (group == 0)
		{
			line[i] = rand() % ('z' - 'a' + 1) + 'a';
		}
		else if (group == 1)
		{
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
		}
		else if (group == 2)
		{
			line[i] = rand() % ('9' - '0' + 1) + '0';
		}
	line[len] = '\0';
	}
	return line;
}