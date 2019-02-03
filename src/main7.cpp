#include<string.h>
#include<stdio.h>
#define N 128

int main()
{
	char line[N];
	char buf[128] = {0};
	printf("Enter a string: ");
	fgets(line, N, stdin);
	int i;
	int j = strlen(line) - 2;
	for (i=0; i <= j; i++)
		buf[line[i]]++;
	for (i=0; i <= j; i++)
		if (buf[line[i]] > 0)
		{
		printf("%c\t%d\n", line[i], buf[line[i]]);
		buf[line[i]] = 0;
		}		
	return 0;
}