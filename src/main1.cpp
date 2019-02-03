#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <unistd.h>
//#include <windows.h>
#include<time.h>
#include "task1.h"
int main()
{
	int startHeight = 0, currTime = 0;
	printf("Enter start height - an integer number in metres ");
	scanf("%d", &startHeight);

	while (height(currTime, startHeight) > 0)
	{
		printf("t=%d c\th=%.1f m\n", currTime, height(currTime, startHeight));
		currTime++;
		clock_t begin = clock();
		int delay = 1000;
		while (clock() < begin + delay);
		//Sleep(1000);
		//sleep(1);
	} 
	printf("BABAH!!!\n");
	return 0;
}