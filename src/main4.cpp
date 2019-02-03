#include<stdio.h>
#include "task4.h"
#define N 512

int main()
{
	char line[N];
	puts("Enter a string:");
	fgets(line, N, stdin);
	printf ("%s", (process (line)));
	return 0;
}