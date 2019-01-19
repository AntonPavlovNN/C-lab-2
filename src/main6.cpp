#include <stdio.h>
#include "task6.h"

int main(void)
{
	char s[200];
	printf("Input string: ");
	scanf("%[^\n]s", s);
	printf("%s", clear(s));

	return 0;
}