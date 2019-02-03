#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{
	int startHeight = 0;
	int currTime = 0;
	float h;
	printf("Enter height: ");
	scanf("%d", &startHeight);

	while (height(currTime, startHeight) > 0)
	{
		unsigned int retTime = time(0) + 1;
		printf("t=%dc \t h=%.1fm\n", currTime, height(currTime, startHeight));
		while (time(0) < retTime);
		currTime++;	
	}
	printf("BABAH!\n");
	return 0;
}