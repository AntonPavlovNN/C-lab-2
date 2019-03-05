#include <stdio.h>
#include <string.h>

#define N 256

int main()
{
	char buf[N];
	char str[128] = { 0 };

	int i;

	puts("Vvedite stroku:");
	fgets(buf, N, stdin);

	int lenght = strlen(buf);

	if (buf[lenght - 1] == '\n')
		
		buf[lenght - 1] = '\0';


	for (i = 0; i < lenght - 1; i++)
		
		str[buf[i]]++;

	for (i = 0; i < lenght - 1; i++)
	{
		if (str[buf[i]] > 0)
		{
			printf("%c - %d\n", buf[i], str[buf[i]]);
			str[buf[i]] = 0;
		}
	}

	getchar();

	return 0;
}