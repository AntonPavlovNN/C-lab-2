#include <string.h>

char* process(char* line)
{
	int i, j;
	char temp;

	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';

	int size = strlen(line);

	for (i = 0; line[i] != '\0'; i++)
	{
		for (j = size - 1; j > i; j--)
		{
			if ((line[i] >= '0'&&line[i] <= '9') && (line[j] >= 'a'&&line[j] <= 'z'))
			{
				temp = line[i];
				line[i] = line[j];
				line[j] = temp;
			}
		}
	}
	return line;
}