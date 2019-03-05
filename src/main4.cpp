#include <stdio.h>
#include "task4.h"

int main()
{
	char line[100];
	
	puts("Vvedite stroku:");
	fgets(line, 100, stdin);

	printf(process(line));
	return 0;
}