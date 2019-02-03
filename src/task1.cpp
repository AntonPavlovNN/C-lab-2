const double G = 9.81;

float height(int currTime, int startHeight)
{
	return (float)startHeight - G * currTime*currTime / 2;
}