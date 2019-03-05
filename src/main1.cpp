#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int currTime, totalTime;
	int starHeight = 0;
	printf("Enter height: ");
	scanf("%d", &starHeight);
	totalTime = sqrt(2 * starHeight / 9.81);
	for (currTime = 0; currTime <= totalTime; currTime++)
		printf("t=%d c\th=%.1f m\n", currTime, height(currTime, starHeight));
	printf("BABAH!!!");
	return 0;
}