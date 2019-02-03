#include <stdio.h>
#include "task3.h"

int main()
{
	int line = 0, count = 0; //line - порядковый номер строки ,count - общее количество строк
	char *buf;
	printf("Enter count ");
	int result = scanf("%d", &count);
	if (result == 0 || count < 0)
	{
		printf("Input uncorrect data!");
		return 1;
	}
	buf = new char[count * 2];
	for (line = 1; line <= count; line++)
	{
		buf=layout(buf, line, count);
		printf("%s\n", buf);
	}
	return 0;

}