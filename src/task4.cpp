#include "task4.h"

char* process(char* line)
{
	char temp;
	//int quantity = 0;
	//while (line[quantity] != '\0')
	//	quantity++;
	int j = SIZE-1;
	int i = 0;
	for (; i != j; i++, j++)
	{
		while (i != j)
		{
			if ('0' <= line[i] && line[i] <= '9')
				break;
			i++;
		}
		while (i != j)
		{
			if (('a' <= line[j] && line[j] <= 'z') || ('A' <= line[j] && line[j] <= 'Z'))
				break;
			j--;
		}
		temp = line[i];
		line[i] = line[j];
		line[j] = temp;
	}
	return line;
}