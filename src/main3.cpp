#include <stdio.h>
#include "task3.h"

int main()
{
	int line = 1;
	int count = 0;

	char buf[255] = { 0 };

	printf("Enter quantity count\n");
	scanf("%d", &count);

	for (; line <= count; line++)
	{
		layout(buf, line, count);
		printf("%s\n", buf);

	}
	scanf("%d", &count);
	return 0;
}
