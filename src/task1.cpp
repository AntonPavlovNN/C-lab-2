float height(int currTime, int startHeight)
{
	const float g = 9.81;

	float l = startHeight - g * currTime * currTime / 2;

	return (l >= 0 ? l : 0);

}