#include <stdio.h>
#include "task3.h"
#define N 256

int main()
{
	int line = 1;
    int count = 0;
	char buf[N] = { 0 };

	printf("Enter amount string:");
	scanf("%d", &count);

	for (line=1; line <= count; line++)
		printf("%s\n", layout(buf, line, count));

	return 0;
}