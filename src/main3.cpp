#include <stdio.h>
#include<stdlib.h>
#include "task3.h"

int main()
{
	char buf[10];
	int line;
	int count;

	printf("Press input the number of lines (1-3):\n");
	scanf("%d", &count);

	printf("There are your triangle:\n");
	for (line=1; line <= count; line++)
	puts(layout(buf, line, count));
	return 0;
}