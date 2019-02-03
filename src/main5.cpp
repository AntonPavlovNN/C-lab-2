#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//#include <windows.h>
#include "task5.h"


int main()
{
	int i;
	char line[100];
	srand(time(0));
	for (i = 0; i < 10; i++)
	{
		printf("%s\n", password(line));
		//Sleep(1000);
	}
	return 0;
}