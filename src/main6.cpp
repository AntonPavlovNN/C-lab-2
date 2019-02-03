#include <stdio.h>
#include "task6.h"

int main()
{
	char line[100];
	puts("Enter a string please:");
	fgets(line, 100, stdin);
	printf("%s", clear(line));
	return 0;
}