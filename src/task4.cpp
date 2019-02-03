#include<stdio.h>
#include<string.h>

char * process(char* line)
{
	int i=0, j= strlen(line) - 1;
	char t;
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
		t = line[i];
		line[i] = line[j];
		line[j] = t;	
	}
	
return line;
}