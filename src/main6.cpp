#include <stdio.h>
#include <string.h>
#include "task6.h"

int main()
{
	char buf[256];
	int len;
	printf("Enter a string:");
	fgets(buf, 256, stdin);
	len = strlen(buf);         
	if (buf[len - 1] == '\n')        
		buf[len - 1] = 0;
	printf("Result: %s\n", clear(buf));

	return 0;
}