#include <stdio.h>

char * layout(char buf[], int line, int count)
{
	int i;
	for (i = 0; i < (count + (line - 1)); i++)
	{
		if (i < (count - line))
			buf[i] = ' ';
		else if (i >= (count - line))
			buf[i] = '*';
	}
	buf[i] = '\0';
	putchar('\n');
	return buf;
}