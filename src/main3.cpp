#include <stdio.h>
#include "task3.h"

int main()
{
	int num_of_str = 0;
	char buf[256];
	printf("Enter the num of strings:");
	scanf("%d", &num_of_str);
	for (int i = 0; i < num_of_str; ++i)
	{
		printf("%s\n", layout(buf, i, num_of_str));
	}
	return 0;
}