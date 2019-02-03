#include "task4.h"
#include <string.h> // strlen()
#include <ctype.h> // isalpha(), isdigit()

char * process(char * line)
{
	int change;
	int left = 0;
	int right = strlen(line) - 1;

	while (left < right)
	{
		while (isalpha(line[left]))
			left++;
		change = line[left];
		while ((right > left) && (isdigit(line[right])))
			right--;
		line[left] = line[right];
		line[right] = change;
	}
	return line;
}