#include <stdio.h>
#include "task3.h"

int main()
{
	int count = 0;
	printf("Enter number of lines: ");
	scanf("%d", &count);
	char buf[256];
	for (int line = 1; line <= count; line++) // cycle to move to another line
	{
		layout(buf, line, count);
		printf(buf);
		printf("\n");
	}
	return 0;
}