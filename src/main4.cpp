#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int main()
{
	char line[SIZE];
	puts("Enter a string: ");
	fgets(line, SIZE, stdin);
	printf("%s", process(line));
	return 0;
}