// Написать программу, выводящую на экран треугольник из звёздочек
//(line - порядковый номер строки с вершины треугольника
//count - общее количество строк
#include <stdio.h>
#include "task3.h"

int main()
{
	int line = 1;
	int count;
	char buf[256];
	printf("Enter a count of line of the triangle: ");
	scanf("%d", &count);
	for (line = 1; line <= count; line++)
	{
		layout(buf, line, count);
		printf("%s\n", buf);
	}
	return 0;
}