char * layout(char buf[], int line, int count)
{

	int k;
	int m = line-1;
	for (k = 0; k < count-line; k++)
	{
		buf[k] = ' ';
	}
	for (int j = 0; j < line + m  ; j++)
	{
		buf[k + j] = '*';
		
	}
	
	return buf;
}