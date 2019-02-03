#include<stdio.h>
#include "task6.h"
#define N 128

int main()
{
	char line[N];
	printf("Enter a string: ");
	fgets(line, N, stdin);
	printf("%s", clear(line));
	return 0;
}