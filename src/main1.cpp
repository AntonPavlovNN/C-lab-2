#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>

int main() 
{
	int time = 0;
	int startHeight;
	printf("input srart height: ");
	scanf("%d", &startHeight);
	while (1)
	{
		printf("%02d c %.1f\n", time, height(time, startHeight));
		time++;
		if (height(time, startHeight) <= 0)
		{
			printf("BABAH!!!");
			break;
		}
	}
	return 0;
}
