#include "task4.h"
#include <stdio.h>

char* process(char* line)
{
	int flag = 0;
	//проверяем левую половину строки
	for (int i = 0; i <= (BUFF - 1); i++)
	{
		if ((line[i] >= (char)(48) && line[i] <= (char)(57)))  // проверяем элемент строки число или нет
		{
			//если элемент строки число, то проверяем последний элемент строки число или конец строки
			for (int j = BUFF - 2; j > 0; j--)
			{
				
				if ((line[j] >= (char)(48) && line[j] <= (char)(57)) || (line[j] == '\0'))
				{// если элемент строки число то ничего не делаем
				}
				//если не число то делаем замену
				else
				{
					//j = BUFF - 2 - flag;
					char b = line[i];
					line[i] = line[j];
					line[j] = b;
					flag++; // запомианем какой номер был заменен цифрой
					j = -1; //если сделали замену то выходим из цикла
				}
				if ( i == j)
				{
					j = 0;
					i = BUFF;
					flag = 0;
				}
			}

		}
	}
	return line;
}