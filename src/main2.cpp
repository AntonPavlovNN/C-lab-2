#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include "task2.h" 

int main()
{
	int secret = 0;
	int value = 0;
	srand(time(NULL));
	secret = rand() % 100;

	printf("guess the number from 0 to 100\n");
	
	while (1)
	{
		scanf("%d", &value);
		
		if (turn(value, secret) == 1)
		{
			printf("less\n");
		}
		else if (turn(value, secret) == -1)
		{
			printf("more\n");
		}
		else  break;
	}
	printf("true");
	
	return 0;

}

