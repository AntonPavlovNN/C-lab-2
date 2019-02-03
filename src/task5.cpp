#include<stdio.h>
#include<stdlib.h>

char * password(char * line)
{
	int a,i;
	for (i = 0; i < 8; i++)
	{
			a = rand() % 3;
			switch (a)
			{
			case 0:
				line[i]=(rand() % ('z' - 'a') + 'a');
				break;
			case 1:
				line[i]=(rand() % ('Z' - 'A') + 'A');
				break;
			default:
				line[i] = (rand() % ('9' - '0') + '0');
			}
			line[8] = '\0';
	}
	return line;
}