#include <string.h>

char* process(char* line)
{
	int i = 0, j = strlen(line)-1;
	char buf;
	while (i < j)
	{
		if (line[i] >= 'a'&&line[i] <= 'z')
		{
			i++;
			continue;
		}
		if (line[j] >= '0'&&line[j] <= '9')
		{
			j--;
			continue;
		}
		buf = line[i];
		line[i] = line[j];
		line[j] = buf;
	}
	return line;
}