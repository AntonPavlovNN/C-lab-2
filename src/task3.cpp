#include "stdio.h"
#include "task3.h"

char * layout(char buf[], int line, int count)
{
	int stars_num = line * 2 - 1; // кол-во звездочек
	int stars_index = count - line; // индекс, с которого начинаются звезды
	
	//---------------------------------------//
	for (int i = 0; i < stars_index; i++)
		buf[i] = ' ';

	for (int j = 1; j <= stars_num; j++)
		buf[stars_index++] = '*';
	//---------------------------------------//

	buf[stars_index] = '\0'; // для фомирования строки
	return buf;
}

void clear_stdin(void)
{
	char c;
	do {
		c = getchar();
	} while (c != '\n'  && c!= EOF);
}