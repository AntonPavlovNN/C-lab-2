#include "task2.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int value=0, secret=0, count = 0;
	srand(time(0));
	secret = rand() % 100;
	printf("Отгадайте число от 0 до 100 \n");
	while (value != secret)
	{
		int result = scanf("%d", &value);
		if (result == 0)
		{
			printf("Uncorrect Value! Game over!");
			return 1;
		}
		if (value < secret)
			printf("%d меньше числа заданного программой! Попробуйте еще раз!\n", value);
		if(value>secret)
			printf("%d больше числа заданного программой! Попробуйте еще раз!\n", value);
		count++;
	}
	printf("Поздравляем!Вы отгадали число за %d попыток!", count);
	return 0;
}