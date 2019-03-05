#include "task5.h"
#include <time.h>
#include <stdlib.h>

char * password(char * line)
{
	for (int i = 0; i <= 8; i++)
	{
		switch (rand() % 3)
		{
		case 0:
		line[i] = rand() % 10 + '0';
		break;
		case 1:
		line[i] = rand() % 26 + 'a';
		break;
		case 2:
		line[i] = rand() % 26 + 'A';
		break;
		}
	}
line[8] = '\0';
return line;
}