#include<stdio.h>
#include<string.h>

char * process(char* line)
{
	int i = 0;
	int j = strlen(line) - 1;
	char temp;
	while (i <= j)
	{
		if (line[i] >= 'a')
		{
			i++;
			continue;
		}
		if (line[j] <= '9')
		{
			j--;
			continue;
		}
		temp = line[i];
		line[i] = line[j];
		line[j] = temp;
	}
	return line;
}