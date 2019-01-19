#include <cstring> 


char* process(char* line)
{
	int size = strlen(line) - 1;

	for (int i = 0; i < size; i++)
	{
		if (line[i] <= '9')
		{
			while (line[size] <= 'a')
			{
				size = size - 1;
			}
			if (i < size)
			{
				char max = line[i];
				line[i] = line[size];
				line[size] = max;
			}
		}
	}
	return line;
}