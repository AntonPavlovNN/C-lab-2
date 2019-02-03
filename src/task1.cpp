#include <stdio.h>
#include "task1.h"
#define G 9.81

float height(int currTime, int startHeight) // расчет высоты над землей в секунду currTime (startHeight - начальная высота)
{
	return (float)(startHeight - G * currTime * currTime / 2);              //L = gt ^ 2 / 2
}

void stdin_clear(void)
{
	char c;
	do {
		c = getchar();
	} while (c != '\n'  && c != EOF);
}