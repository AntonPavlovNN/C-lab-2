#include <stdio.h>
#include "task6.h"
#include <string.h>

int main()
{
	char buf[512];
	printf("Enter a string:\n");
	fgets(buf, 512, stdin);

	clear(buf);
	puts(buf);
	
	return 0;
}