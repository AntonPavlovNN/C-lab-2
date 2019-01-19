float height(int currTime, int startHeight)
{
	const float g = 9.81;
	float distance_travelled= currTime*currTime * g / 2;
	float currHeight = startHeight - distance_travelled;
	return currHeight;
}