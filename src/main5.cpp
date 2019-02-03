#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"

#define PASSWORDSAMOUNT 10


int main()
{
	
	char line[SIZE] = { 0 };
	srand(time(0)); //here, because we should do it for one time
	for (int k = 0; k < PASSWORDSAMOUNT; k++)//to generate 10 passwords
	{
		password(line);
		printf("%s\n", line);
	}

	return 0;
}