#include <string.h>
#include "task6.h"


char* clear(char *line)
{
	int word = 0;
	int pos = 0, flag = 0;
	int y = 0;
	int end;
	int i;
	for (i = 0; line[i]; ++i)
	{
		if (!flag && line[i] == '\ ' && !word)
		{
			pos = i;
			flag = 1;
		}
		else  if (line[i] == '\ ' && word)
		{
			end = i;
			word = 0;
		}
		else if (line[i] != '\ ' && !word)
		{
			if (flag)
			{
				y = i;
				i = pos;
				while (line[pos++] = line[y++]);
				flag = 0;
			}
			word = 1;
		}
	}
	if (line[i - 1] == '\ ')
		line[end] = '\0';

	return line;
}