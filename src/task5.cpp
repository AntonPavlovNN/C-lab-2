#include <stdlib.h>
#include "task5.h"

#define LENGHT_OF_PASS 8 

char* password(char *line)
{
	for (int i = 0; i < LENGHT_OF_PASS; ++i)
	{
		switch (rand() % 3)
		{
		case 0: line[i] = '0' + rand() % ('9' - '0' + 1); break;
		case 1: line[i] = 'a' + rand() % ('z' - 'a' + 1); break;
		case 2: line[i] = 'A' + rand() % ('Z' - 'A' + 1); break;
		}
	}
	line[LENGHT_OF_PASS] = '\0';
	return line;
}