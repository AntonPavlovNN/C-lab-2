#include <time.h>




char * password(char * line)
{
	int i, j,buf;
	long long int t=time(NULL);
	for (i = 0; i < 3; i++) //добавим цифры
	{
		t = t+time(NULL);
		j = 48 + t % 10;
		line[i] = char(j);
	}
	for (i = 3; i < 6; i++) //добавим буквы
	{
		t = t + time(NULL);
		j = 65 + t % 26;
		line[i] = char(j);
	}
	for (i = 6; i < 8; i++) //добавим буквы другого размера
	{
		t = t + time(NULL);
		j = 97 + t % 26;
		line[i] = char(j);
	}
	for (i = 0; i < 10; i++) //перемешаем
	{
		t = t + time(NULL);
		t = t % 8;
		buf = line[t];
		line[t] = line[7 - t];
		line[7 - t] = buf;
	}
	line[8] = '\0';
	return line;
}