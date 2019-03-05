#include <string.h>
#include "task4.h"


char* process(char *line)
{
	char buf;
	int begin = 0, end = strlen(line);
	for (; begin < end; begin++)
	{
		if (('0' <= line[begin]) && (line[begin] <= '9'))
		{
			for (; begin < end; end--)
			{
				if (('A' <= line[end]) && (line[end] <= 'z'))
				{
					buf = line[begin];
					line[begin] = line[end];
					line[end] = buf;
					break;
				}

			}
		}
	}
	return line;
}