#include "task6.h"

char * clear(char * line)
{
	int i = 0, j = 0;
	for (; line[i] != '\0'; i++)
	{
		if (line[i] == ' ')
		{
			if (j == 0) continue;
			if (line[i + 1] == ' ') continue;
			if (line[i + 1] == '\0') break;
		}
		line[j] = line[i];
		j++;
	}
	line[j] = '\0';
	return line;
}