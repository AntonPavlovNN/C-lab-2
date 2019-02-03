#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task6.h"

int main()
{

	char line[SIZE] = { 0 };
	printf("Enter a string:\n");
	fgets(line, SIZE, stdin);
	clear(line);
	printf("%s", line);
	return 0;
}