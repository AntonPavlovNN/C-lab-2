#include <time.h>
#include <stdlib.h>

char * password(char * line)
{
	char buf1[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','R','Q','R','S','T','U','V','W','X','Y','Z'};
	char buf2[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','r','q','r','s','t','u','v','w','x','y','z' };
	char buf3[] = {'0','1','2','3','4','5','6','7','8','9'};
	
	for (int i = 0; i < 3; i++)
	{
		int k = rand() % 26;
		line[i] = buf1[k];
	
	}
	for (int i = 3; i < 6; i++)
	{
		int k = rand() % 26;
		line[i] = buf2[k];
		
	}
	for (int i = 6; i < 8; i++)
	{
		int k = rand() % 10;
		line[i] = buf3[k];
		line[8] = '\0';
	}

	return line;
}

