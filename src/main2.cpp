#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include "task2.h"


int main()
{
	int value, secret;
	srand(time(0));
	secret = rand() % 100+1;
	value = 0;
	while (turn(value, secret) != 0)
	{
		printf("Enter number on 1 to 100 - ");
		scanf("%d", &value);
		turn(value, secret);
		if (turn(value, secret) > 0)
			printf("Your number  > the number of computer!\n");
		if (turn(value, secret) < 0)
			printf("Your number  < the number of computer!\n");
				
	}
	printf("True!");
	return 0;
}