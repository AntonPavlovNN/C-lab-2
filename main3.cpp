/*Написать программу, выводящую на экран треугольник из звёздочек:
  *
 ***
*****

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task3.h"

int main()
{
	int count = 0;			//line - порядковый номер строки с вершины треугольника, count - общее количество строк
	char buf[256] = { 0 };

	printf("Enter namber of count: ");
	scanf("%d", &count);
	for (int line = 1; line <= count; line++)
		puts(layout(buf, line, count));
	return 0;
}