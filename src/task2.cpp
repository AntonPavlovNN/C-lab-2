int turn(int value, int secret)
{
		if (secret > value)
			return -1;
		else if (secret < value)
			return 1;
		else if (secret == value)
			return 0;
}
