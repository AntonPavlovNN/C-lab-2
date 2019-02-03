#include <stdio.h>

char * layout(char buf[], int line, int count) //line - порядковый номер строки ,count - общее количество строк
{
	int i=0;
	while (i < count - line)
	{
		buf[i] = ' ';
		i++;
	}
	while (i < 2 * count)
	{
		buf[i] = '*';
		i++;
	}
	i = count + line-1;
	/*while (i < 2 * count)
	{
		buf[i] = '|';
		i++;
	}*/
	buf[i] = '\0';
	return buf;

}