/* Написать программу ”Угадай число”. Программа задумывает число в диапазоне от 1 до 100
	Пользователь должен угадать его за наименьшее количество попыток.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"

int main()
{
	int secret = 0, value = 0, step = 0, status = 1;

	srand(time(0));
	printf("Enter value (0 <= value <= 100): ");
	scanf("%d", &value);
	
	secret = rand()%101;
	
	while (status == 1)
	{
		system("cls");									//Очистка консоли
		step = turn(value, secret);
		printf("You value: %d\n", value);
		if (step == 1) printf("Big\n");
		if (step == -1) printf("Small\n");
		if (step == 0)
		{
			printf("Congratulations!!! You are win!!! The secret value is %03d\n", secret);
			return 0;
		}
		printf("Enter value (0 <= value <= 100) or x (to exit): ");
		status = scanf("%d", &value);
	}
	return 0;
}