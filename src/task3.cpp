char * layout(char buf[], int line, int count)
{
	for (int i = 0; i < count - line ; i++)
		buf[i] = ' ';
	for (int i = count - line; i < count+line-1; i++)
		buf[i] = '*';
	buf[count+line-1] = '\0';
	return buf;
}