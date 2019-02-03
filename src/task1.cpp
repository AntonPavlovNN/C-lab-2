float height(int currTime, int startHeight)
{
	const double g = 9.81;
	float height;
	height = startHeight - g * (currTime*currTime) / 2;
	return height;
}