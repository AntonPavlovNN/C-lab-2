int turn(int value, int secret)
{
	if (value > secret)
		return 1;
	else if (value < secret)
		return -1;
	else
		return 0;
}