#include <stdio.h>
#include <time.h>
#include "task1.h"
void clean_stdin(void)
{
	int c = 0;
	do 
	{
		c = getchar();
	} 
	while (c != '\n' && c!= EOF);
}

int main()
	{
	float startHeight;
	int currTime=0;

	while (1)
	{
		printf("Enter start height, m: \n");
		scanf("%f", &startHeight);
		clean_stdin();
		if (startHeight >= 0)
			break;
	}

	for (; height(currTime, startHeight) > 0; currTime++)
	{
		if (currTime < 10)
			printf("t=0%d c h=%10.1f\n", currTime, height(currTime, startHeight));
		else
			printf("t=%d c h=%10.1f\n", currTime, height(currTime, startHeight));

		unsigned int retTime = time(0) + 1;
		while (time(0) < retTime);
	}
	puts("BABAH!!");
	
	return 0;
	}
