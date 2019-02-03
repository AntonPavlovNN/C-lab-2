#include <stdio.h>
#include <string.h>

int main()
{
	float freq[256];
	int lenght;
	char str[256];
	char *pstr = str;
	printf("Enter a string: ");
	scanf("%s", str);
	lenght = strlen(str);
	for (int i = 0; i < 256; ++i)
	{
		freq[i] = 0;
	}
	while (*pstr)
	{
		freq[*pstr++] += 1.0 / lenght;
	}

	for (int i = 0; i < 256; ++i)
	{
		if (freq[i])
			printf("%c - %f\n", i, freq[i]);
	}
	return 0;
}