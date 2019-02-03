/*
 Написать программу, выводящую таблицу встречаемости символов для введен-
   ной пользователем строки. В этой таблице содержится символ строки и число
   его повторений.
   */

#include <stdio.h>
#include <string.h>

int main()
{
	char buf[512];
	printf("Enter a string using only letters:\n");
	fgets(buf, 512, stdin);

	int count[26] = { 0 };
	for (int i = 0; i < strlen(buf); i++)
		count[buf[i] - 'a']++;
	for (int i = 0; i < 26; i++)
		printf("%c meets - %d\n", i + 'a', count[i]);

	return 0;
}