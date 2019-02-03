#include <stdio.h>
#define N 256
#include <locale>

int main()
{
	char str[N];
	int pres_str[N] = { 0 };
	char buf[N] = { 0 };
	buf[0] = '\0';
	int count[N] = { 0 };
	int j = 0;
	int k = 0;
	setlocale(LC_ALL, "Rus");
	printf("¬ведите строку: ");
	fgets(str, N, stdin);
	for (j; str[j] != '\n'; j++)
		;
	str[j] = '\0';
	j = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (pres_str[str[i]] != 0)
		{
			while (str[i] != buf[k])
				k++;
			count[buf[k]]++;
		}
		else if (pres_str[str[i]] == 0)
		{
			buf[j] = str[i];
			pres_str[str[i]] = 1;
			count[buf[j]]++;
			j++;
		}
	}
	buf[j + 1] = '\0';
	for (int i = 0; buf[i] != '\0'; i++)
		printf("%c-%d\n", buf[i], count[buf[i]]);
	return 0;
}