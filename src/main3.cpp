#define _CRT_SECURE_NO_WARNINGS
#include <locale>
#include <stdio.h>
#include "task3.h"

int main()
{
	int line = 1;
	int count;
	char buf[256];
	setlocale(LC_ALL, "Rus");
	printf("¬ведите колличество строк в треугольнике: ");
	scanf("%d", &count);
	for (line = 1; line <= count; line++)
	{
		layout(buf, line, count);
		printf("%s\n", buf);
	}
	return 0;
}