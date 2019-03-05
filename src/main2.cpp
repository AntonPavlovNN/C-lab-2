#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task2.h"


int main()

{

	int value = 0;
	int secret = 0;
	int value_count = 0;

	srand(time(0));
	secret = rand() % 100;

	printf("Kak dumaesh, kakoe chislo zagadal etot EVM?\n");
		
	while (scanf("%d", &value) > 0)

	{

		for (value_count = 1; turn(value, secret) != 0; value_count++)

		{

			if (turn(value, secret) == 1)

				printf("Peeeerebor, poprobyi eshe:\n");

			else

				printf("Neeedobor, poprobyi eshe:\n");

			scanf("%d", &value);

		}


		printf("Ugadaaaal!!!Kolichestvo popitok %d!\n", value_count);
		secret = rand() % 100;

		printf("A ugadai kakoe seichas zagadal: \n");
				
	}
			
}