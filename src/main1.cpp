#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//#include <windows.h>
#include "task1.h"

#define GI 9.81

int main()
{
	int i, currTime = 0, startHeight = 0;
	printf("Enter start height and curr time: ");
	scanf("%d %d", &startHeight, &currTime);
	for (i = 0; (height(currTime, startHeight)) >= 0; currTime++)
	{
		printf("t=%02d sec.      h=%06.1f m.\n", currTime, height(currTime, startHeight));
		//Sleep(1000);
	}
	printf("BABAH!!!");
	return 0;
}