#include<stdio.h>
#include <time.h>
#include "task1.h"

void sleep(int ms)
{
	int c = clock() + ms;
	while (clock() < c);
}

int main()
{
	int currTime=0, startHeight=0;
	printf("Enter height in metres ");
	scanf("%d", &startHeight);
	for (int currTime = 0; height(currTime, startHeight)>0; currTime++)
	{
	printf("t=%02d c   h=%.1f m\n", currTime, height(currTime, startHeight));
	sleep(1000);
	}
	printf("BABAH!!!\n");
	return 0;
}