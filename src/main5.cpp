#pragma warning(disable:4996)
#include <stdio.h>
#include "task5.h"
#include <time.h>
#include <stdlib.h>
#define pQ 10 //quantity of password
#define pL 8 //lenght of password
int main()
{
	srand(time(NULL));
	char line[pL+1];

	for (int j = 1; j <= pQ; j++) // main cycle, quantity of password
	{
		printf("%s\n", password(line));
	}
	return 0;
}