#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 255

int main()
{
	int i, j;
	char line[N] = { 0 };
	char buf[N] = { 0 };
	
	puts("Enter a string:");
	fgets(line, N, stdin);

	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';

	for (i = 0; line[i] != '\0'; i++)
	{
		buf[line[i]]++;
	}

	for (i = 0; line[i] != '\0'; i++)
	{
		if (buf[line[i]] > 0)

		{
			printf("%c \t %d\n", line[i], buf[line[i]]);
			buf[line[i]] = 0;
		}


	}
	return 0;
}