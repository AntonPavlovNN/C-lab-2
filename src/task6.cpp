#include <string.h>

char * clear(char * line)
{
	int i, j, count = 0;
	int str = strlen(line);
	for (i = 0; line[0] == ' ';)
	{
		for (j = 0; j < str; j++)
			line[j] = line[j + 1];

		str--;
	}

	for (i = 0; i < str; i++)
	{
		while (line[i] == ' ' && line[i + 1] == ' ')
		{
			for (j = i; j < str; j++)
				line[j] = line[j + 1];
			str--;
		}
	}

	while (line[str - 1] == ' ')
	{
		line[str - 1] = '\0';
		str--;
	}

	return line;
}