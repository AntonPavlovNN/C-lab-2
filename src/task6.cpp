#include <stdio.h> 
#include <string.h>

char * clear(char * line)
{
	int begin = 0, i = 0;

	while (line[begin] == ' ')
		for (i = begin; i < strlen(line); i++)
			line[i] = line[i + 1];

	for (; begin < strlen(line); begin++)
		while (line[begin] == ' '&& line[begin + 1] == ' ')
			for (i = begin; i < strlen(line); i++)
				line[i] = line[i + 1];

	for (begin = strlen(line); line[begin - 1] == ' ';)
		line[begin - 1] = '\0';

	return line;
}
