#include <string.h>

char* process(char* line)
{
	int length = 0;				//Длинна строки
	int temp = 0;

	length = strlen(line);

	for (int i = 0; i <= length; i++)
	{
		for (int j = length; j > i; j--)
		{
			if ((line[i] >= '0' && line[i] <= '9') && (line[j] >= 'a' && line[j] <= 'z'))
			{
				temp = line[i];
				line[i] = line[j];
				line[j] = temp;
				length--;
				continue;
			}
		}
	}
	return line;
}