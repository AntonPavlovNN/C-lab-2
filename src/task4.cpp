#include <string.h>
char* process(char* line)
{
	int begin=0, end = strlen(line)-1;
	char n;
	
	while (begin < end)
	{
		if (line[begin] >= 'a')
		{
			begin++;
			continue;
		}
		if (line[end] <= '9')
		{
			end--;
			continue;
		}
	
		n = line[begin];
		line[begin] = line[end];
		line[end] = n;
	}
	
	return line;
}

