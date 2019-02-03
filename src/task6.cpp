#include <stdio.h>
#include <string.h>

char * clear(char * line)
{
	int i = 0;
	int j = 0;
	int count = 0;
	while (i < strlen(line))
	{
		if (line[i] != ' ')
		{
			i++;
			continue;
		}
		count = 0;


		if (line[i] == ' ')
		{
			while (line[i] == ' ')
			{
				count++;

				i++;
			}

			for (j = i - count + 1; j <= strlen(line); j++)
			{
				line[j] = line[j + count - 1];


			}
		}

		i++;
	}
	if (line[0] == ' ')
	{
		for (int k = 0; k < strlen(line); k++)
		{
			line[k] = line[k + 1];
		}
	}
	 
	if (line[strlen(line) - 1] == ' ')
		line[strlen(line) - 1] = '\0';


	return line;
}