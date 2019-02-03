#include "task1.h"
#define GRAVITY 9.81

float height(int currTime, int startHeight)
{
	float height = startHeight - GRAVITY * currTime*currTime / 2;
	return height;
}