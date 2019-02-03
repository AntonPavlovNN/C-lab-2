#include <stdio.h>
#include "task4.h"

int main()
{
	char line[100] ;
	puts("Enter a string please:");
	fgets(line, 100, stdin);
	
	printf(process(line));
	return 0;
}