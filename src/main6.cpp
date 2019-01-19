#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task6.h"
#include <string.h>

int main()
{
	char line[256];
	
	printf ("Enter line: ");
	fgets (line, 256, stdin);


	printf("%s", clear(line));
	
	
	getchar();
	return 0;
}