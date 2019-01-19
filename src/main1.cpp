#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"

int main()
{
	int startHeight;
	int currTime = 0;
	
	printf("Enter height: \n");
	scanf("%d", &startHeight);

	for (; height(currTime, startHeight) > 0; currTime++)
	{
		if (height(currTime, startHeight) > 0)
			printf("t=%02d c   h=%.1f m\n", currTime, height(currTime, startHeight));
		int plus = time(NULL) + 1;
		while (time(NULL) < plus);
	}
	
	printf("BABAH!!!");

	getchar();
	getchar();
	return 0;
}

