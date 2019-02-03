#pragma warning(disable:4996)
#include <stdio.h>
#include "task3.h"
#define maxLength 200 //максмальное количество строк

int main()
{
	char buf[maxLength];
	int count = 0;
	printf("Enter the number of strings <=%d: ", maxLength/2);
	scanf("%d", &count);

	for (int line = 1; line <= count; line++)
		printf("\n%s", layout(buf, line, count));
		return 0;
}