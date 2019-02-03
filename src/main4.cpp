#include <stdio.h>
#include "task4.h"
#define N 256

int main()
{
	char line[N];

	printf("Enter a string: ");
	fgets(line, N, stdin);

	printf("%s", process(line));
	return 0;
}