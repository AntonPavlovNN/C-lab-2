#define N 256
#include <stdio.h>
#include "task6.h"
/*Ќаписать программу, очищающую строку от лишних пробелов. Ћишними счи-
таютс€ пробелы в начале строки, в конце строки и пробелы между словами,
если их количество больше 1*/
int main()
{
	char line[N];
	fgets(line, N, stdin);
	clear(line);

	for (int i = 0; line[i] != '\0'; i++)
	{
		putchar(line[i]);
	}
	return 0;

}
