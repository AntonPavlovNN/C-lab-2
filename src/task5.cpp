#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char * password(char * buf)
{
	int random;
	
	
	for (int i = 0; i < 8; i++)
	{
		random = rand() % (3 + 0);
		if (random == 1)
			buf[i] = rand() % ('9' - '0' + 1) + '0';
		if (random == 0)
			buf[i] = rand() % ('z' - 'a' + 1) + 'a';
		if (random == 2)
			buf[i] = rand() % ('Z' - 'A' + 1) + 'A';
		
	}
	buf[8] = 0;
	return buf;
}