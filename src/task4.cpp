char* process(char* line)
{
	int sL = 0;
	for (; line[sL] != '\0'; sL++);

	for (int i = 0, j = sL - 1; i < j; i++, j--)
	{
		if ( ('a' <= line[i] && line[i] <= 'z') || ('A' <= line[i] && line[i] <= 'Z') ) //если буква 
		{
			if ( ('a' <= line[j] && line[j] <= 'z') || ('A' <= line[j] && line[j] <= 'Z') ) //если буква
				j++;
			//if ('0' <= line[j] && line[j] <= '9') //если цифра
			//;
		}

		else if ('0' <= line[i] && line[i] <= '9')//если цифра
		{
			if ('0' <= line[j] && line[j] <= '9')//если цифра
			i--;
						
			if ( ('a' <= line[j] && line[j] <= 'z') || ('A' <= line[j] && line[j] <= 'Z') ) //если буква 
			{
				char temp = line[i];
				line[i] = line[j];
				line[j] = temp;
			}
		}
	}
	return line;
}