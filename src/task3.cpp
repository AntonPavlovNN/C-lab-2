#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char * layout(char buf[], int line, int count)
{
	int i = 0;
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