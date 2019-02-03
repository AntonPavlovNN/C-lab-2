#include "task6.h"
#include <string.h>
#define UNWANTED_CHAR ' '

char * clear(char * line)
{
	int len = strlen(line);
	int i = 0;
	int j = 0;
	while (i < len)
	{
		int unwand_count = 0;
		j = i + 1;
		while ((line[i] == UNWANTED_CHAR) && (line[i + 1] == UNWANTED_CHAR))
		{
			unwand_count++;
			i++;
		}
		for (int k = j; k < len; k++)
			line[k] = line[k + unwand_count];
		i = j;
		len = strlen(line);  // new "len" after cleaning out unwanted spaces
	}

	
	if (line[0] == UNWANTED_CHAR)
		for (int k = 0; k < strlen(line); k++)
			line[k] = line[k + 1];


	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';
	if (line[strlen(line) - 1] == UNWANTED_CHAR)
		line[strlen(line) - 1] = '\0';

	
	return line;
}