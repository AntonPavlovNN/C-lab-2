#include <time.h>
#include <stdlib.h>
#include "task5.h"

char * password(char * line)
{
	char str1[26] = { 0 };
	char str2[26] = { 0 };
	char str3[10] = { 0 };

	// to input of letters and numbers into three arrays str1, str2 and str3
	int temp1 = 'A';
	for (int i = 0; i < 26; i++)
	{
		str1[i] = temp1;
		temp1++;
	}
	int temp2 = 'a';
	for (int i = 0; i < 26; i++)
	{
		str2[i] = temp2;
		temp2++;
	}
	int temp3 = '0';
	for (int i = 0; i < 10; i++)
	{
		str3[i] = temp3;
		temp3++;
	}

	int j = 0, arrNumber = 0;
	for (int i = 0; i < (SIZE-1); i++)/*to get letters and numbers from str1, str2 and str3 and put 
		them into the array "line"*/
	{
		arrNumber = (rand() % 3);
		if (arrNumber == 0)
		{
			j = (rand() % 26);
			line[i] = str1[j];
		}
		else if (arrNumber == 1)
		{
			j = (rand() % 26);
			line[i] = str2[j];
		}
		else
		{
			j = (rand() % 10);
			line[i] = str3[j];
		}
	}
	line[SIZE - 1] = '\0';
	return line;
}