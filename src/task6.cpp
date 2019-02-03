#include <string.h> 
#include "task6.h"

char * clear(char * line)
{
	int length = strlen(line);
	int from = 0;
	for (int i = 0; i < length; i++)// deleting ' ' at the begining
	{
		if (line[i] != ' ')
			break;
		else
			from++;
	}
	for (int i = 0; i < length; i++)
	{
		line[i] = line[i + from];

	}
	// deleting ' ' in the middle
	for (int i = 1; i < length; i++)
	{
		if (line[i] != ' ')
			continue;
		else
		{
			if (line[i - 1] != ' ')
				continue;
			else
				for (int j = i; j < length; j++)
				{
					line[j] = line[j + 1];
					i--;
				}
		}
	}
	// deleting ' ' in the end
	for (int i = 1; i < length; i++)
	{
		if ((line[i] != '\n') && (line[i] != '\0'))
			continue;
		else if ((line[i] == '\n') || (line[i] == '\0'))
		{
			if (line[i-1] != ' ')
				break;
			else
			{
				line[i] = '\0';
				line[i - 1] = '\0';
				break;
			}
		}
	}
	return line;
}