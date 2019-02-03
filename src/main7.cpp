#define CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#define SIZE 256

int main()
{
	char string[SIZE] = { 0 };
	char symbols[SIZE] = { 0 };
	int counter[SIZE] = { 0 };
	int t = 0, flag = 0;
	printf("Just write something: ");
	gets(string);
	for (int i = 0; string[i] != '\0'; i++)
	{
		for (int j = 0; symbols[j] != '\0'; j++)
		{
			if (string[i] == symbols[j])
			{
				counter[j]++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			symbols[t] = string[i];
			counter[t]++;
			t++;
		}
		flag = 0;
	}
	printf("symbol\tquantity\n");
	for (int i = 0; symbols[i] != '\0'; i++)
	{
		printf("'%c'\t%d\n", symbols[i], counter[i]);
	}
	return 0;
}
