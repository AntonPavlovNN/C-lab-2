#include<stdio.h>

float height(int currTime, int startHeight)
{
	double g=9.81;
	float height = startHeight - (g * currTime*currTime / 2);
	return height;
}