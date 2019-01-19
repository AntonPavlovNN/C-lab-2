#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include "task5.h"



int main()
{

	char line[8];
	srand(time(0));
	printf("Enter password length:\n");
	int k = 0;

	for (int i = 0; i < 10; i++)
	{

		password(line);
	
		printf("%s\r", line);
		sleep(1);

		putchar('\n');
	}
	
	return 0;

}