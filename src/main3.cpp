#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>
#define SIZE 256

int main()
{
	int line, count;
	char buf[SIZE] = {0};
	printf("input number of lines: ");
	scanf("%d", &count);
	for (int line = 1; line <= count; line++)
	{
		printf(layout(buf, line, count));
		printf("\n");
	}
	return 0;
}