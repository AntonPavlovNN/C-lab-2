#include <stdio.h>
#include <unistd.h>
#include "task1.h"


int main()
{
	int startHeight = 0;
	int currTime = 0;
	
	
	
	printf("Enter with a start height of fall of the bomb, H \n");
	scanf("%d", &startHeight);
	while (height(currTime, startHeight) > 0)
	{
		printf("t=%dc   h=%.1fm\n", currTime, height(currTime, startHeight));
		currTime = currTime + 1;
		sleep(1);
	}
	printf("Babah!!!\n");
	
	return 0;
}


