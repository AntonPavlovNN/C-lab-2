#define G 9.81

float height(int currTime, int startHeight)
{
	//L = gt ^ 2 / 2, где g = 9.81 m / c
	float result = 0;
	result = (float)startHeight - (G * (float)currTime * (float)currTime / 2);
	return result;
}