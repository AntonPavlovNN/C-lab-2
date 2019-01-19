#include <stdio.h>
#include <cstring>
#include "task6.h"
int main()
{
	char line[255];
	puts("Enter a struing, please:");
	fgets(line, 255, stdin);
	
	clear(line);
	printf("%s", line);
	scanf("%s", line);
	return 0;
}

