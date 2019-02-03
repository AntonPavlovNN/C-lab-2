#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "task3.h"

int main()
{
	char buf[200] = { 0 };
	int line, count;

	printf("Enter a number of lines: ");
	scanf("%d", &count);

	for (line = 1; line <= count; line++)
	{
		layout(buf, line, count);
		printf("%s\n", buf);
	}
	return 0;
}