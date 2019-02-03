#include "task1.h"
#include <stdio.h>
#define SH 5000

int main()
{
	int currTime = 0;
	float startHeight = SH;
	do
	{
		printf("t=%d\th=%.1f\n", currTime, startHeight);
		currTime++;
		startHeight = height(currTime, startHeight);
	} while (startHeight >= 0);
	printf("BABAH!!!");
	return 0;
}