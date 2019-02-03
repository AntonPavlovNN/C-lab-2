/*	Написать программу ”Угадай число”. Программа задумывает число в диапазоне 
	от 1 до 100 и пользователь должен угадать его за наименьшее количество
	попыток.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <time.h>
#include <stdlib.h>
#include "task2.h"

int main()
{
	int user_num = -2;

	srand(time(0));
	int secret = rand() % 100 + 1;
	printf("%d\n", secret); // secret number
	int enter; // result of the function "scanf"

	do{
		do {

			printf("Enter a number in the range from 1 to 100: ");
			enter = scanf("%d", &user_num);
			if (user_num < 1 || user_num > 100 || enter == 0)
			{
				clean_stdin();
				puts("Enter the correct data!\n");
				//clean_stdin();
			}
		} while (user_num < 1 || user_num > 100 || enter == 0);
		//clean_stdin();
	}
	while (turn(user_num, secret) != 0);

	return 0;
}

