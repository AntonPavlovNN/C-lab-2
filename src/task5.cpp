#include "task5.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char * password(char * line)
{
	
	int a = 0, b = 0, c = 0, d = 0;
	for (int i = 0; i < 9; i++)	//этот цикл создает 1 пароль
	{
		int a = rand() % 3;
		if (a == 0)
			line[i] = (char)(rand() % 10 + 48);   // цифры
		if (a == 1)
			line[i] = (char)(rand() % 26 + 65);   // буквы лат строчн
		if (a == 2)
			line[i] = (char)(rand() % 26 + 97);   // буквы лат заглав
		if (i == 8)
			line[8] = '\0';						// конец строки

		if (i == 8)
		{
			for (int i = 0; i < 9; i++)	//проверяет пароль
			{
				if ((line[i] >= (char)(48) && line[i] <= (char)(57))) // есть ли в пароле цифры!
				{
					a = 1;
				}
				if ((line[i] >= (char)(65) && line[i] <= (char)(90))) // есть ли в пароле заглавная буква!
				{
					b = 1;
				}
				if ((line[i] >= (char)(97) && line[i] <= (char)(122))) // есть ли в пароле строчная буква!
				{
					c = 1;
				}
				if (i == 8)
				{

					if (a&&b&&c == 1) // проверка на все условия
					{
						return line;
						a = b = c = 0;
					}
					else // если проверка не прошла увеличить кол-во паролей
					{
						i = 0;
						a = b = c = 0;
					}
				}
			}
		}
	}
}