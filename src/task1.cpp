float height(int currTime, int startHeight)
{
	float height_t = startHeight - 9.81*(currTime*currTime) / 2;
	return height_t;
}

