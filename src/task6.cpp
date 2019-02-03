#include <string.h>

char * clear(char * line)
{
	int N = 0;

	N = strlen(line);

	if (line[N - 1] == '\n')
		line[N - 1] = '\0';

	while (line[0] == ' ')
		for (int i = 0; i < N; i++)
			line[i] = line[i+1];

	for (int i = 1; i < N-1; i++)
	{
		while (line[i] == ' ' && line[i + 1] == ' ')
			for (int j = i; j < N; j++)
				line[j] = line[j + 1];
	}

	if (line[strlen(line) - 1] == ' ')
		line[strlen(line) - 1] = '\0';

	return line;
}