#include <stdio.h>
#include "task3.h"
#define N 128


int main()
{
	int count = 0;
	int line = 1;
	char buf[N] = { 0 };
	
	printf("Enter the number of lines: ");
	scanf("%d", &count);
	
	for (; line <= count; line++) 
		printf("%s\n", layout(buf, line, count));
	
	return 0;
}