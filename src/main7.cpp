#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 256

int main()
{
	char buf[SIZE];
	char str[128] = { 0 };
	int i;
	puts("Enter a string please:");
	fgets(buf, SIZE, stdin);
	int leght = strlen(buf);
	if (buf[leght - 1] == '\n')
		buf[leght - 1] = '\0';
	for (i = 0; i < leght - 1; i++)
		str[buf[i]]++;
	for (i = 0; i < leght - 1; i++)
	{
		if (str[buf[i]] > 0)
		{
			printf("%c - %d\n", buf[i], str[buf[i]]);
			str[buf[i]] = 0;
		}
	}
return 0;
}
