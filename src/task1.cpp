#define g_2 4.905 // 0.5g=4.905  g=9.81
float height(int currTime, int startHeight)
{
	return startHeight - g_2 * currTime*currTime;
}