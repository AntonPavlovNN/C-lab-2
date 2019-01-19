#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main(void)
{
	int line, count;
	char buf[100];
	printf("Input number of lines: ");
	scanf("%d", &count);
	for (line = 1; line <= count; line++)
		printf("%s\n", layout(buf, line, count));
	return 0;
}