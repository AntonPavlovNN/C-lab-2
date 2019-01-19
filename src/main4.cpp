#include <stdio.h>
#include "task4.h"
#define N 256

int main()
{
	char line[N];
	printf("Enter your string: ");
	fgets(line, N, stdin);
	printf(process(line));
	return 0;
}