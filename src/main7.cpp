#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100] = { 0 };
 	char arr1[100] = { 0 };
	
	printf("Enter a string:\n");
	fgets(arr, 100, stdin);
	int length = 0;
	length = strlen(arr);
	int j = 0, count = 0;
	//create new array with numbers from  the arrays without repeats
	for (int i = 0; i < length-1; i++)
	{
		int flag = 0;
		for (int k = i + 1; k < length-1; k++)
		{
			if (arr[i] == arr[k])
			{
			flag = 1;
			break;
			}
			else
			flag = 0;
		}
		if (!flag)
		{
			arr1[j] = arr[i];
			j++;
			count++;
		}
	}
	for (int i = 0; i < count; i++) //counting amount of repeats and printing the table
	{
		int count1 = 0;
		for (int k = 0; k < length; k++)
		{
			if (arr1[i] == arr[k])
				count1++;
		}
		printf("'%c'\t%d\n", arr1[i], count1);
	}
	return 0;
}