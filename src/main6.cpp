#include <stdio.h>
#include <string.h>
#include "task6.h"
#define N 256

int main()
{
	char line[N];

	printf("Enter a string: ");
	fgets(line, N, stdin);

	if (line[strlen(line) - 1] == '\n')  //проверяем если предпоследний символ \n, меняем его на '\0'
		line[strlen(line) - 1] = '\0';

	printf(clear(line));
	
	return 0;
}