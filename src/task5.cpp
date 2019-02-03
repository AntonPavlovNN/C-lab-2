#include "task5.h"
#include <stdlib.h> // для rand()
#define len 8

char * password(char * line)
{
	for (int i = 0; i < len; i++)
	{
		switch (rand() % 3)
		{
		case 0:
			line[i] = rand() % ('9' - '0' + 1) + '0';
			break;
		case 1:
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
			break;
		case 2:
			line[i] = rand() % ('z' - 'a' + 1) + 'a';
			break;
		}
	}
	line[len] = '\0';

	return line;
}