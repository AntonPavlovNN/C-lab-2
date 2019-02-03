#include <stdio.h>
#include "task6.h"
#include <string.h>
#define N 256
#include <locale>

int main()
{
	char line[N];

	setlocale(LC_ALL, "Rus");	
	printf("Строка ввода: ");
	fgets(line, N, stdin);

	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';

	printf(clear(line));

	return 0;
}