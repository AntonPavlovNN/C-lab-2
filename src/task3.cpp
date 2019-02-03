#include "task3.h"

char * layout(char buf[], int line, int count)
{
	int i = 0;
	for (; i < (count - line); i++)
	{
		buf[i] = ' ';
	}
	for (int j = 1; j <= 2*line-1; j++, i++)
	{
		buf[i] = '*';
	}
	return buf;
}
