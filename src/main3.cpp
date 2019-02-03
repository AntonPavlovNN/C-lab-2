#include<stdio.h>
#include "task3.h"
#define N 256


int main()
{
	char buf[N];
	int line, count;
	printf("Enter count ");
	scanf("%d", &count);
	for (line = 1; line <= count; line++)
	{
		printf("%s\n", layout (buf, line, count));
	}
	return 0;
}