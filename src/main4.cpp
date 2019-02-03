#pragma warning(disable:4996)
#include <stdio.h>
#include "task4.h"
#include <stdlib.h>
#include <time.h>
#define sLMax 100 // max length of string

int main()
{
	srand(time(NULL));
	int letter = rand() % 36; 
	int sL = rand() % (sLMax ) + 1; //length of string
	//int sL = 25; //if we want set the length manual
	char line[sLMax+1];
	
	for (int i = 0; i < sL; i++) //random generation of string
	{
		letter = rand() % 62;
		if (0 <= letter && letter <= 9) { line[i] = '0' + letter;}
		else if (10 <= letter && letter <= 35) { line[i] = 'A' + letter - 10;}
		else if (36 <= letter && letter <= 61) { line[i] = 'a' + letter - 36;}
	}
	line[sL] = '\0';
	
	printf("old string: \"%s\"\n", line);
	printf("new string: \"%s\"\n", process(line));
	return 0;
}
