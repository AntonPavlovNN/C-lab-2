#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

main()
{
	int count = 0, line = 1;
	printf("Enter the amount of lines (a positive integer number from 1 to 50):");
	scanf("%d", &count);
	char buf[1000] = { 0 };
	for (line = 1; line <= count; line++)
	{
		layout(buf, line, count);
		printf("%s\n", buf);
	}
	return 0;
}