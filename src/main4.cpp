#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "task4.h"

int main()
{

char line[100];
printf("Enter a string:\n");
scanf("%s", line);
printf("%s", process(line));

return 0;
}
