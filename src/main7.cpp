/*
	Написать программу, выводящую таблицу встречаемости символов 
	для введенной пользователем строки. 
	В этой таблице содержится символ строки и число его повторений.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 100
#define N 95 // ASCII (from 32 to 126 = 95)

int main()
{
	char str[SIZE];
	int count[N] = { 0 };
	int max = 0;

	printf("Please, enter the string: \n\n");
	fgets(str, SIZE, stdin);

	str[strlen(str) - 1] = '\0';  //delete \n


	for (int i = 0; str[i]; i++)   //while (str[i] != '\0')
		count[str[i] - ' ']++; // ASCII ' ' === 32


	for (int i = 0; i < N; i++)
	{
		if (count[i] > 0)
			printf("%c - %d\n", i + ' ', count[i]); // ASCII ' ' === 32
	}

	printf("\n");


	return 0;
}