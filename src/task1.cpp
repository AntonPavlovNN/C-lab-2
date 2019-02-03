#define GI 9.81

float height(int currTime, int startHeight)
{
	float height;
	height =(float)(startHeight - (GI*(currTime*currTime)) / 2);
	return height;
}