#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{
	int startHeight = 0;
	int currTime = 0;
	
	printf("Enter height: \n");
	scanf("%d", &startHeight);

	while (height(currTime, startHeight) > 0)
	{
		int retTime = time(0) + 1;
		printf("t=%dc h=%.1fm\n", currTime, height(currTime, startHeight));
		while (time(0) < retTime);
		currTime++;
	}
	printf("BABAH!\n");
	return 0;
}