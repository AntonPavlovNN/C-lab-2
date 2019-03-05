#include <stdio.h>
#include "task1.h"

int main()

{
	int currTime = 0;
	int startHeight = 0;

	printf("Vvedite visoty sbrosa bombi:");
	scanf("%d", &startHeight);

	while (height(currTime, startHeight) > 0)
	{
		printf("t=%d    H=%0.1f\n", currTime, height(currTime, startHeight));
		currTime++;
		
	}

	printf("BABAH!");

	return 0;
}