#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	int line = 1;
	int count=0;
	char buf[256];

	printf("Enter the number of count: ");
	scanf("%d", &count);
	

	for (line = 1; line <= count; line++)
		printf("%s\n", layout(buf, line, count));
	
	getchar();
	getchar();
	return 0;
}