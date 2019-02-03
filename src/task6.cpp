char * clear(char * line)
{
	int position = -1, wordBegin = 0;
	short flag = 0;
	int i = -1;
	do
	{
		i++;
		if (flag == 0)
		{
			if (line[i] == '\0')
			{
				if (position == -1) //случай когда "пустая" строка
					position = 0;
				line[position] = '\0';
				break;
			}
			if (line[i] != ' ' && line[i] != '\0')
			{
				wordBegin = i;
				flag = 1;
			}
			continue;
		}

		else if (flag == 1)
		{
			if (line[i] != ' ' && line[i] != '\0')
				continue;
			for (int j = 0; j <= (i - wordBegin); j++)
			{
				position++;
				line[position] = line[wordBegin + j];
			}
			if (line[i] == '\0') break;
			flag = 0;
			continue;
		}
	} while (line[i] != '\0');
	return line;
}
