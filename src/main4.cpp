#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"

int main(void)
{
	char line[1000];
	printf("Input string: ");
	scanf("%s", line);
	printf("%s\n", process(line));
	
	return 0;
}