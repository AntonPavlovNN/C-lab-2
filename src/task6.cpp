#include<stdio.h>
#include<string.h>

char * clear(char * line)
{
int a = strlen(line);
while (line[0] == ' ')
{
	for (int b = 0; b < a; b++)
	{
		line[b] = line[b + 1];
	}
	a = a - 1;
}
for (int i = 0; i < a; i++)
{
	while (line[i] == ' ' && line[i + 1] == ' ')
	{
		for (int j = i; j < a; j++)
		{
			line[j] = line[j + 1];
		}
		a = a - 1;
	}
}
if (line[a - 1] == ' ')
{
	line[a - 1] = '\0';
}
return line;
}