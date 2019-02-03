#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define pass_lenght 8

char * password(char * line)
{
	int i = 0;
	int r = 0;
	while (i < pass_lenght)
	{
		r = rand() % 3;
		if ( r == 0 )
			line[i] = '0' + rand() % ('9'-'0');// символ от 0(48) до 9
		if ( r == 1 )
			line[i] = 'A' + rand() % ('Z'-'A');// символ от 'A'(65) до 'Z'
		if ( r == 2 )
			line[i] = 'a' + rand() % ('z'-'a');// символ от 'a'(97) до 'z'
		//putchar(line[i]);
		i++;
	}
	line[i] = '\0';
	return line;
}