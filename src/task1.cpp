float height(int currTime, int startHeight)
{
	const float g = 9.81;
	float ans = startHeight - g * currTime*currTime / 2;
	return (ans >= 0 ? ans : 0);
}