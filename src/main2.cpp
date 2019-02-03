#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <time.h>
#include "task2.h"

int main(void)
{
	int secret, value = -1;

	secret = 1 + time(NULL) % 100;
	while (turn(value, secret) != 0)
	{
		setlocale(LC_ALL, "Rus");
		printf("я загада число от 1 до 100, угадай его!: ");
		scanf("%d", &value);
		if (turn(value, secret) > 0)
			printf("—лишком большое\n");
		else if (turn(value, secret) < 0)
			printf("—лишком маленькое\n");
	}
	printf("”гадал!");
	return 0;
}