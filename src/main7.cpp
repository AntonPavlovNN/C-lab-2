#include <stdio.h>

#define SIZEBUF 256

int main()
{
	printf("Enter a string\n");
	char buf[SIZEBUF];
	int num[SIZEBUF] = { 0 };
	int count = 0;
	fgets(buf, 256, stdin);

	for (int i = 0; i < SIZEBUF; i++)
	{
		for (int j = 0; j < SIZEBUF; j++)
		{
			if (buf[i] == buf[j])
			{
				count++;
			}
			else
			{
				num[i] = 0;
			}
			if (buf[j] == '\n')
			{
				num[i] = count;
				count = 0;
			}
			if (buf[j] == (char)('\n')) //выход из массива при достижении символа
			{
				j = SIZEBUF;
			}

		}
		if (buf[i] == (char)('\n')) //выход из массива при достижении символа
		{
			i = SIZEBUF;
		}
	}
	printf("Simbol and his quantity\n");
	for (int i = 0; i < SIZEBUF; i++)
	{
		if (buf[i] == (char)('\n')) //выход из массива при достижении символа
			i = SIZEBUF;
		else
		printf("%5c %5d\n", buf[i], num[i]);
	}

	return 0;
}

