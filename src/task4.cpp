#include <string.h>

char* process(char* line)
{
	int i, j, word = 0, str = 0;
	str = strlen(line);
	for (i = 0; i < str; i++)
	{
		for (j = str - 1; j > i; j--)
		{
			if ((line[i] >= '0' && line[i] <= '9') && (line[j] >= 'a' && line[j] <= 'z'))
			{
				word = line[j];
				line[j] = line[i];
				line[i] = word;
				break;
			}
			else;
		}



		
	}
	return line;
}