#include <stdio.h>

char* process(char* line)
{
	int i = 0, j =  printf(line) - 1;
	char symbol = 0;
	while (i != j )
	{
		if (line[i] >= '0' && line[i] <= '9')
		{
			if ((line[j] >= 'a' && line[j] <= 'z') || (line[j] >= 'A' && line[j] <= 'Z'))
			{
				symbol = line[i];
				line[i] = line[j];
				line[j] = symbol;
			}
			else j--;
		}
		else i++;
	}
	return line;
}