char * layout(char buf[], int line, int count)
{
	int index = 0; 
	for (int i = 0; i <= (count - line); i++) // space counter in string
	{
		buf[i] = ' ';
		index = i;
	}
	for (int j = 1; j <= (2 * line - 1); j++) // star counter in string
	{
		buf[index] = '*';
		buf[index + 1] = '\0';
		index++;
	}
	return buf;
}