#include <stdio.h>
#include<stdlib.h>

char* layout(char buf[], int line, int count)
{
	if (line == 1)
		sprintf(buf, "  *");
	else if (line == 2)
		sprintf(buf, " ***");
	else if (line == 3)
		sprintf(buf, "*****");
	return buf;
}