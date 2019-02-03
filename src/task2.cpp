int turn(int value, int secret)
{
	if (value == secret)
	{
		//cout << "Вы угадали!\n";
		return 0;
	}
	if (value > secret)
	{
		//cout << "Это число больше! Попробуйте еще раз!\n";
		return 1;
	}
	if (value < secret)
	{
		//cout << "Это число меньше! Попробуйте еще раз!\n";
		return -1;
	}
}