/*
	Написать программу, выводящую на экран треугольник из звёздочек
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"
#define N 40 // кол-во символов в строке

int main()
{
	char buf[N];
	int count;
	int line = 1;
	int scanf_result = 0;

	do {
		printf("Enter the number of lines: ");
		scanf_result = scanf("%d", &count);
		clear_stdin();
	} while (!scanf_result);
	
	//scanf("%d", &count);
	printf("\n");

	
	for (int i = 1; i <= count; i++)
	{
		puts(layout(buf, line++, count));
	}

	printf("\n");

	return 0;
}