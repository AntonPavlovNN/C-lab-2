#include <stdio.h>
#include "task6.h"
#define N 256

int main()
{
	char line[N];
	printf("Enter your string: ");
	fgets(line, N, stdin);
	printf(clear(line));
	return 0;
}