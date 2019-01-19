#include <stdio.h>
#include "task1.h"
#include <math.h>

const float g = 9.81;

int main()
{
	int startHeight = 0;
	printf("Enter height: ");
	scanf("%d", &startHeight);
	int currTime = 0;
	int totalTime= rint(sqrt(startHeight / g * 2));
	for (currTime; currTime < totalTime; currTime++)
	{
		printf("t=%02dc\t%06.1f\n", currTime, height(currTime, startHeight));
	}
	printf("BABAH!!!");
	return 0;
}