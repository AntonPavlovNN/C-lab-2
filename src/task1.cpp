#include "task1.h"
#include <math.h>

float height(int currTime, int startHeight)
{

	float height = 0;
	height = startHeight - (9.81 * currTime*currTime / 2);
	return height;
}