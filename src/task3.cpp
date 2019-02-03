char * layout(char buf[], int line, int count)
{ 
	int i = 0;
	for (i = 0; i < count - line; i++)
	{
		buf[i] = ' ';
	}
	for (i = count - line; i < count + line - 1; i++)
	{
		buf[i] = '*';
	}
	return buf;
}