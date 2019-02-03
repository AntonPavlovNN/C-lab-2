#include "task5.h"
#include <time.h>
#include <stdlib.h>

char * password(char * line)
{
	int i = 0;
	for (; i < SIZE; i++)
	{
		switch (rand() % 3)
		{
		case 0:
			line[i] = rand() % 10 + 48;		//numbers
			break;
		case 1:
			line[i] = rand() % 26 + 65;		//A - Z
			break;
		case 2:
			line[i] = rand() % 26 + 97;		//a - z
			break;
		}
	}
	line[i] = '\0';
	return line;
}