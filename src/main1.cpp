#include <stdio.h>
#include "task1.h"
#include <math.h>


int main()
{
	int currTime, totalTime;
	int startHeight = 0;
	printf("Enter start height: ");
	scanf("%d", &startHeight);
	const float g = 9.81;

	totalTime = sqrt(2 * startHeight / g);

	for (currTime = 0; currTime <= totalTime; currTime++)
		printf("t=%d s\th=%.1f m\n", currTime, height(currTime, startHeight));

	printf("BABAH!!!");
	return 0;
}
