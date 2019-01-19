#include <stdio.h>
#define N 256

int main()
{

	char str[N];
	int count[128] = { 0 };
	printf("Enter a string\n");
	fgets(str, N, stdin);

	for (int i = 0; str[i] != '\0'; i++)
	{

		count[str[i]] = count[str[i]] + 1;
	}

	for (int j = 32; count[j] < 128; j++)
	{
		if (count[j] > 0)
		{
			printf("%c   %d\n", j, count[j]);
		}
	}

	return 0;
}