#include <stdio.h>
#include <time.h>
#include "task1.h"


int main()
{
	int startHeight = 0;
	int t;
	printf("Enter with a start height of fall of the bomb, H \n");
	scanf("%d", &startHeight);
	t = 0;
	while (height(t, startHeight) > 0)
	{
		printf("t=%02d c h=%2.1f m\n", t, height(t, startHeight));
		unsigned int retTime = time(0) + 1;
		while (time(0) < retTime);
		t++;
	}
	printf("BABAH!!!");

	return 0;
}
