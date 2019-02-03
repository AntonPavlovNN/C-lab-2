#include <stdio.h>

float height(int currTime, float startHeight)
{
	return (startHeight - (9.81 * ((float)currTime * (float)currTime) / (float)2));
}