#include <string.h>

char* process(char* line)

{
int i, j, words, str = 0;
str = strlen(line);

	for (i = 0; i < str; i++)
	{
	 for (j = str - 1; j > i; j--)
	  {
		if ((line[j] >= 'a' && line[j] <= 'z') && (line[i] >= '0' && line[i] <= '9'))
    	{
	      words = line[j];
		  line[j] = line[i];
		  line[i] = words;
		  break;
		}
	   else;
	  }
		
	}
return line;
}
