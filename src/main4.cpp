#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task4.h"

int main()
{
	char line[256];
	printf("Enter string :");
	scanf ("%s", line);
	printf("%s", process (line));

	getchar();
	getchar();
	return 0;
}

