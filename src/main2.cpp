#include <stdio.h>
#include "task2.h"
#include <time.h>

int main()
{
	int value = 0;
	int secret = 0;
	printf("Enter a number 1-100:");
	secret = 1 + (time(NULL))%100;
	while (1)
	{
		scanf("%d", &value);
		
		switch (turn(value, secret))
		{

		case -1:
	
			printf("Less");
			continue;
		case 1:
			
			printf("More");
			continue;
		case 0:
			
			printf("Guess");
			break;

			
		}

		
	}

	return 0;

}