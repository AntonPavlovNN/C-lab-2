#pragma warning(disable:4996)
#include <stdio.h>
#include "task2.h"
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int value = 0;
	int secret = rand();
	secret = rand() % 100 + 1;
	printf("I have a secret number(%d),\n it's integer between 1 and 100\n Lets try to guess it!", secret);
	int i = 0;
	while (turn(value, secret) != 0)
	{
		printf("\n Enter you number: ");
		scanf("%d", &value);
		int t = turn(value, secret);
		if (t > 0) printf("Your number (%d) is bigger then mine", value);
		if (t < 0) printf("Your number (%d) is less then mine", value);
		i++;
	}
	printf("\n That's right, the secret number is: %d", secret);
	printf("\n You have tried %d times", i);

	return 0;
}