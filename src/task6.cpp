#include <cstring>

char * clear(char * line)
{
	int size = strlen(line);

	while (line[0] == ' ')
	{
		for (int k = 0; k < size; k++)
		{
			line[k] = line[k + 1];
		}
		size = size - 1;
	}
	for (int i = 0; i < size; i++)
	{
		while (line[i] == ' ' && line[i + 1] == ' ')
		{
			for (int j = i; j < size; j++)
			{
				line[j] = line[j + 1];
			}
			size = size - 1;
		}
	}
	if (line[size - 1] == ' ')
	{
		line[size-1] = '\0';
	}
	return line;
}

