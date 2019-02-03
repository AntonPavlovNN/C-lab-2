#include "task6.h"
#include <stdio.h>

int main()
{
	char line[SIZE];
	printf("Just write something: ");
	gets(line);
	printf("%s",clear(line));
	//putchar('\n');
	return 0;
}