#include <stdio.h>
#include "task6.h"

int main()
{
	char line[100];

	puts("Vvedite stroky:");
	fgets(line, 100, stdin);

	printf("%s", clear(line));

	getchar();

	return 0;
}