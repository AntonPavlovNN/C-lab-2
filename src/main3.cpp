#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[255] = { 0 };
	int line;
	int count;

	printf("Enter a number of lines: ");
	scanf("%d", &count);

	for (line = 1; line <= count; line++)
	{
		layout(buf, line, count);
		printf("%s\n", buf);
	}
	return 0;
}