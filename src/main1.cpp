#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{
	float startHeight, currentHeight;
	int timer = 0;
	clock_t now;
	printf("Height(format 5000.0): ");
	scanf("%f", &startHeight);
	while (1)
	{
		if ((currentHeight = height(timer, startHeight)) <= 0)
		{
			printf("BABAH!!!\n");
			return 0;
		}
		printf("t=%02dc h=%.1f M\n", timer, currentHeight);
		now = clock();
		while ((clock() <= now + CLOCKS_PER_SEC));
		timer++;
	}
	return 0;
}