#include <stdio.h>
#define N 256

int main()
{
	char str[N];
	int present_str[N] = { 0 };
	char buf[N] = { 0 };
	buf[0] = '\0';
	int count[N] = { 0 };
	int j = 0;
	int k = 0;
	printf("Enter your string: ");
	fgets(str, N, stdin);
	for (j; str[j] != '\n'; j++)
		;
	str[j] = '\0';
	j = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (present_str[str[i]] != 0)
		{
			while (str[i] != buf[k])
				k++;
			count[buf[k]]++;
		}
		else if (present_str[str[i]] == 0)
		{
			buf[j] = str[i];
			present_str[str[i]] = 1;
			count[buf[j]]++;
			j++;
		}
	}
	buf[j + 1] = '\0';
	for (int i = 0; buf[i] != '\0'; i++)
		printf("%c\t-\t%d\n", buf[i], count[buf[i]]);
	return 0;
}