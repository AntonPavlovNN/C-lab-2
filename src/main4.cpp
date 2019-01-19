#include  <stdio.h>
#include "task4.h"

int main()
{
	char line[512];

	puts("Enter a string, please:\n");
	fgets(line, 512, stdin);
	
	printf("%s", process(line));
	return 0;
}

