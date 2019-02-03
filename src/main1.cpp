#pragma warning(disable:4996)
#include <stdio.h>
#include "task1.h"
int main ()
{
	int  startHeight = 0;
	int currTime = 0;
	
	printf("enter the  start height, in meters: ");
	scanf("%d", &startHeight);
	float h = startHeight;
	while (h > 0)
	{
		printf("\nt=%02d c  h=%.1f m", currTime, h);
		currTime++;
		h = height(currTime, startHeight);
	} 
	printf("\nBABAH!!!");

return 0; 
}