#include <stdio.h>
#include "task1.h"
#include <time.h>

int main()

{
	int startHeight=0;
	int currTime=0;
	printf("Enter height:");
	scanf("%d", &startHeight);

	while (height(currTime,startHeight)> 0)
	{
		unsigned int retTime = time(0) + 1;
		

		printf("t=%02d c \t  h=%2.1f m \n",currTime, height(currTime, startHeight));
		while (time(0) < retTime);
      	currTime++;
	}
	printf("BABAH!!!");
	return 0;

}