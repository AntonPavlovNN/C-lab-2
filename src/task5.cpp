#define pL 8 //lenght of password
#include <time.h>
#include <stdlib.h>
char * password(char * line)
{
	int letter = rand() % 62;
	short flag_1 = 0, flag_A = 0, flag_a = 0;

	while (flag_1 == 0 || flag_A == 0 || flag_a == 0)
	{
		flag_1 = 0; flag_A = 0; flag_a = 0;
		for (int i = 0; i < pL; i++) //lenght of password
		{
			letter = rand() % 62;
			if (0 <= letter && letter <= 9)
			{
				line[i] = '0' + letter;
				flag_1 = 1;
			}
			else if (10 <= letter && letter <= 35)
			{
				line[i] = 'A' + letter - 10;
				flag_A = 1;
			}
			else if (36 <= letter && letter <= 61)
			{
				line[i] = 'a' + letter - 36;
				flag_a = 1;
			}
		}
	}
	line[pL] = '\0';

	return line;
}