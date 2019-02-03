#include <stdio.h>
#include "task6.h"
#define N 256

int main()
{
	char line[N] = { 0 };
	printf("Enter a string: ");
	fgets(line, N, stdin);

	printf("%s", clear(line));
	return 0;
}