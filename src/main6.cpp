#include "task6.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 200

int main()
{
	char line[SIZE];
	printf("Just write something: ");
	fgets(line, SIZE, stdin);
	printf(clear(line));
	return 0;
}