#include <stdio.h>
#include <string.h>

char * clear(char * line)
{
	int i, lenth = strlen(line);

	while (line[0] == ' ')
	{
		for (int k = 0; k < lenth; k++)
			line[k] = line[k + 1];
		lenth--;
	}
	
	for (i = 0; i < lenth; i++)
		while (line[i] == ' ' && line[i + 1] == ' ')
		{
			for (int k = i; k < lenth;k++)
				line[k] = line[k + 1];
			lenth--;
		}

	while (line[lenth-1] == ' ')
	{
		line[lenth-1] = '\0';
		lenth--;
	}

	return line;
}