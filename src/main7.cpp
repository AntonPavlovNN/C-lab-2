#include <stdio.h>
#include <string.h>

int main(void)
{
	int a[255] = { 0 }, i;
	char s[250];
	scanf("%[^\n]s", s);
	for (i = 0; i < strlen(s); i++)
		a[int(s[i])]++;
	for (i = 0; i < 255; i++)
	{
		if (a[i] > 0)
			printf("%c %d\n", i, a[i]);
	}
	return 0;

}