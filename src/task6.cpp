﻿#include "pch.h"
#include <string.h>


char * clear(char * line)
{
	int i, j;
	int length = strlen(line);
	
	while (line[0] == ' ')
	{
		for (j = 0; j < length; j++)
			line[j] = line[j + 1];
	}
	
	for (i = 0; i < length; i++)
		while ((line[i] == ' ' && line[i + 1] == ' '))
			for (int j = i; j < length; j++)
				line[j] = line[j + 1];
			
	while (line[length - 1] == ' ' || line[length - 1] == '\n')
		line[length - 1] = '\0';
	   		
	return line;
}