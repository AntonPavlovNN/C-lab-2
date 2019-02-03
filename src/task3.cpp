char * layout(char buf[], int line, int count)
{
	for (int j = 1; j <= count - 1 + line; j++)
	{
		if (j <= count - line)
			buf[j-1] = ' ';
		else 
			buf[j-1] = '*';
	}
	buf[count-1+line] = '\0';
	return buf;
}