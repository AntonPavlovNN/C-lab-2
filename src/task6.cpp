#include <string.h>

char * clear(char * line)
{
	int i = 0,j;
	while (line[i] == ' ')
		i++;
	for (j = 0; j <=strlen(line) - i; j++)
		line[j] = line[j + i];
	i = 0;
	while (line[i])
	{
		if (line[i] != ' ')
		{
			i++;
			continue;
		}
		j = i;
		while (line[i] == ' ')
			i++;
		if (i-j>1)
			for (int k = j; k <= strlen(line); k++)
				line[k] = line[k + i - j-1];
	}
	if (line[strlen(line) - 1] == ' ')
		line[strlen(line) - 1] = '\0';
	return line;

}
