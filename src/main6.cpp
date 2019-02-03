#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"


int main()
{ 
	// создадим строку
	srand(time(NULL));

	int secret, value, result = 1;
	char  line[BUFF] = { 0 };

	for (int i = 0; i < BUFF; i++)
	{
		int a = rand() % 3;
		if (a == 0)
			line[i] = (char)(32);               // пробел
		if (a == 1)
			line[i] = (char)(rand() % 26 + 65); // буквы лат строчн
		if (a == 2)
			line[i] = (char)(rand() % 26 + 97); // буквы лат заглав
		/*if (a == 3)
			line[i] = char(rand() % 10 + 48); // цифры*/
		if (i == BUFF-1)
			line[i]= '\0';					  // конец строки
	}
	 
	printf("%s", line);
	printf("\n\n New string \n\n");
	
	printf("%s", clear(line));

	return 0;
}
