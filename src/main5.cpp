/* Написать программу, которая выводит на экран 10 паролей, сгенерированных
   случайным образом из латинских букв и цифр, причём буквы должны быть
   как в нижнем, так и в верхнем регистрах. Длина пароля - 8 символов.*/
#include <stdio.h>
#include "task5.h"
#include <time.h>
#include <stdlib.h>

int main()
{
	char line[10];
	srand(time(0));
	for (int j = 0; j < 10; j++)
		printf("%s\n", password(line));

	return 0;
}