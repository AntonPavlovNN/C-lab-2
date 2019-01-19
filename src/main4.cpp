#include <stdio.h>
#include "task4.h"
#define N 512

int main()
{
	char line[N];
	printf("Enter a string\n");
	fgets(line, N, stdin);
	printf("%s", process(line));
	
	return 0;
}