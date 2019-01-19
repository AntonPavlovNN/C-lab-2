#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * password(char * line)
{
	char base[62];
	int i;
	
	for (i = 0; i < 10; i++)
		base[i] = '0' + i;
	for (i = 0; i < 26; i++)
		base[i + 10] = 'a' + i;
	for (i = 0; i < 26; i++)
		base[i + 36] = 'A' + i;

	int random;
	srand(time(NULL));

	for (i = 0; i < 8; i++)
	{
		random = rand() % 62;
		line [i] = base [random];
	}
	line[8] = '\0';
	return line;
}

