#include <stdio.h>
#include <string.h>
#include "task6.h"
#define N 255

int main()
{
	char line[N];
	int i = 0;
	int j = 0;
	int count = 0;
	puts("Enter a string:");
	fgets(line, N, stdin);
	printf("%s",clear(line));	
	return 0;

}
