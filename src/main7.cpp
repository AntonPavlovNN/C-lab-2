#define N 256
#define M 127
#include <stdio.h>

int main()
{
	char line[N],table[M];
	char symbol;
	int i = 0;
	for (; i < M; i++)
		table[i] = 0;
	fgets(line, N, stdin);
	for (i = 0; line[i] != '\0'; i++)
	{
		symbol = line[i];
		table[(int)symbol] += 1;		
	}
	for (i = 32; i<M; i++)
	{
		symbol = i;
		if(table[i]!=0)
			printf("\"%c\"\t%d\n", symbol, table[i]);
	}
	return 0;
}
