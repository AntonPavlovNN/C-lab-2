/* Ќаписать программу, очищающую строку от лишних пробелов. Ћишними счи-
   таютс€ пробелы в начале строки, в конце строки и пробелы между словами,
   если их количество больше 1.*/
#include <stdio.h>
#include "task6.h"
#include <string.h>
#define N 256

int main()
{
	char line[N];

	printf("Input string: ");
	fgets(line, N, stdin);

	if (line[strlen(line) - 1] == '\n') 
		line[strlen(line) - 1] = '\0';

	printf(clear(line));

	return 0;
}