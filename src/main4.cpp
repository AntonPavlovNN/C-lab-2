/*
	Написать программу, переставляющую символы в массиве согласно правилу:
	сначала идут латинские буквы, потом цифры. 
	Строка задается в коде программы в виде случайной последовательности 
	букв и цифр. 
	Пользоваться дополнительными массивами нельзя.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task4.h"
#define LENGTH 60 

int main()
{
	char line[LENGTH];
	char ch;
	clock_t now;
	srand(time(0));

	int i = 0;
	while (i < (LENGTH - 1))
	{
		switch (rand() % 3)
		{
		case 0:
			line[i++] = rand() % ('Z' - 'A' + 1) + 'A';
			break;
		case 1:
			line[i++] = rand() % ('z' - 'a' + 1) + 'a';
			break;
		case 2:
			line[i++] = rand() % ('9' - '0' + 1) + '0';
			break;
		}
	}
	line[LENGTH - 1] = '\0';
	printf("Original array: \n");
	puts(line);
	printf("\n");

	printf("Modified array: \n");
	puts(process(line));
	printf("\n");

	return 0;
}