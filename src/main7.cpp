#include <stdio.h>
#define N 256

int main()
{
	char str[N];
	char symbol[N] = { 0 };
	int count[N] = { 0 };
	int i, j;

	printf("Enter a string: ");
	fgets(str, N, stdin);

	for (i = 0; str[i]; i++)
	{
		j = 0;
		while (str[i] != symbol[j] && symbol[j] != '\0')
		{
			j++;
		}
		symbol[j] = str[i];
		(count[j])++;
	}
	i = 0;
	while (symbol[i + 1] != '\0')
	{
		printf("%c = %d\n", symbol[i], count[i]);
		i++;
	}
	return 0;
}