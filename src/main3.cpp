#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char buf[100];
	int line = 0, count = 0;
	printf("Enter count of line: ");
	scanf("%d", &count);
	for (line = 1; line <= count; line++)
		printf(layout(buf, line, count));
	return 0;
}