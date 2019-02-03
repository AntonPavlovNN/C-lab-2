/*
   Ќаписать программу, очищающую строку от лишних пробелов.
   Ћишними считаютс€ пробелы в начале строки, в конце строки
   и пробелы между словами, если их количество больше 1.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task6.h"

int main()
{
	//FILE * ptrFile = fopen("log.txt", "a");	//место хранени€ логов
	char line[512] = { 0 };
	printf("Enter a string: ");
	fgets(line, 512, stdin);
	fflush(stdin);								//очищаем поток ввода
	clear(line);
	puts(line);
	//fputs(line, ptrFile);						//сохран€ем логи
	return 0;
}