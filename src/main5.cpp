#include <stdio.h>
#include "task5.h"
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	for (int i = 1; i <= 10; i++)
	{
		char buf[512];
		
		password(buf);
		printf(buf);
		putchar('\n');
	}




	return 0;
}