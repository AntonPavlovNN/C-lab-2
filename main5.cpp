/*
   Написать программу, которая выводит на экран 10 паролей, сгенерированных
   случайным образом из латинских букв и цифр, причём буквы должны быть
   как в нижнем, так и в верхнем регистрах. Длина пароля - 8 символов.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "task5.h"

const int N = 10;		//n - количество паролей

int main()
{
	char line[N] = { 0 };
	srand(time(NULL));
	for (int i = 1; i <= N; i++)
	{
		puts(password(line));
		//printf("%d\n", strlen(line));
	}
	return 0;
}