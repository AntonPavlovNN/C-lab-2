#include <stdio.h>

int main()
{
	char str[256];
	char buf[256];
	printf("Enter a string: \n");
	fgets(str, 256, stdin);
	int j, i, i1 = 0, i2 = 0, number = 0;

	for (i = 0; str[i] != '\0'; i++)
		{
		for (j = 0; j < i; j++)
			if (str[i] == str[j])
				break;
		if (i == j)
			buf[i1] = str[i], i1++;
		}

	for (j = 0; j < i1 - 1; number = 0, j++)
		{
		for (i2 = 0; i2 < i-1; i2++)
			if (buf[j] == str[i2])
				number++;
		printf("%c %d\n", buf[j], number);
		}
	
	getchar();
	return 0;
}
