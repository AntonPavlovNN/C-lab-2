char * clear(char * line)
{
	int i = 0, j = 0;
	for (j; line[j] != '\0'; j++) // transformation all space gaps to ' '
	{
		if (line[j] == ' ')
		{
			int temp = j;
			i = j;
			line[i] = line[j];
			for (j; line[j] == ' '; j++)
				;
			while (line[j] != '\0')
			{
				i++;
				line[i] = line[j];
				j++;
			}
			line[i + 1] = '\0';
			j = temp;
		}
	}
	if ((line[j - 1] == ' ')|| (line[j - 1] == '\n')) // delete '\n' and ' ' in tail of string
	{
		j = j - 1;
		line[j] = ' ';
		while (line[j] == ' ')
			j--;
		line[j + 1] = '\0';
	}
	if (line[0] == ' ')  // delete ' ' in front of string
	{
		i = j = 0;
		j++;
		while (line[j] != '\0')
		{
			line[i] = line[j];
			j++;
			i++;
		}
		line[i] = '\0';
		i = j = 0;
	}
	return line;
}