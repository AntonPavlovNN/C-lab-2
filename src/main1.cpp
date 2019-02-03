#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task1.h"

void delay(int ms) 
{
	int c = clock() + ms;
	while (clock() < c);
}

int main()
{
	int startHeight, t = 0;
	float curHeight = 1;
	printf("Enter the starting height\n");
	scanf("%d", &startHeight);
	while (curHeight > 0)
	{
		curHeight = height(t, startHeight);
		if (curHeight > 0)
		{
			printf("t=%2d c h=%.2f m\n", t, curHeight);
			delay(1000);
			t++;
		}
		else
		{
			printf("BABAH!!!");
		}
	}
	return 0;
}
