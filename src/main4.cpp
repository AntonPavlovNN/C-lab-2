#define _CRT_SECURE_NO_WARNINGS
#include "task4.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	char buf[SIZE];
	srand(time(0));
	int i = 0;
	for (; i < SIZE-1; i++)
	{
		switch (rand() % 3)
		{
		case 0:
			buf[i] = rand() % 10 + 48;		//numbers
			break;
		case 1:
			buf[i] = rand() % 26 + 65;		//A - Z
			break;
		case 2:
			buf[i] = rand() % 26 + 97;		//a - z
			break;
		}
	}
	buf[i] = '\0';
	printf("String: %s\nResult: ", buf);
	printf(process(buf));
	putchar('\n');
	return 0;
}