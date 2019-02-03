#include <stdio.h>
#include "task4.h"

int main()
{
	char line[255];
	fgets(line, 255, stdin);
	process(line);
	printf("\n\n%s",line);
	return 0;
}