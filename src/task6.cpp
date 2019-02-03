#include <string.h>

char * clear(char * line)

{
	int i, j, str = strlen(line);

	while (line[0] == ' ')
		for (i = 0; i < str; i++)
			line[i] = line[i + 1];

	for (i = 0; i < str; i++)
	{
		while (line[i] == ' ' && line[i + 1] == ' ')
			for (j = i; j < str; j++)
				line[j] = line[j + 1];
	}

	if (line[strlen(line) - 1] == ' ' || line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';

	return line;
}