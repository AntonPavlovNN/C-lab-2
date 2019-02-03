#include "task1.h"
#include <math.h>

float height(int currTime, int startHeight)
{
	return startHeight - (pow((float)currTime, 2) * 9.81 / 2);
}
