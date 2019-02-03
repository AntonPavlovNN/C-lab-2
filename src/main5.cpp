/*
Написать программу, которая выводит на экран 10 паролей, сгенерированных
случайным образом из латинских букв и цифр, причём буквы должны быть
как в нижнем, так и в верхнем регистрах. Длина пароля - 8 символов.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <time.h>
//#include <Windows.h>
#include "task5.h"
#define passwords_number 10

int main()
{
	char line[passwords_number];
	
	/*
	srand(time(0));
	for (int j = 0; j < password_number; j++)
	{
		for (int i = 0; i < 100; i++)
		{
			printf("%s\r", password(line));
			Sleep(rand() % 50);
		}
		putchar('\n');
	}
	*/

	for (int j = 0; j < passwords_number; j++)
		printf("%s\n", password(line));
	
	return 0;
}