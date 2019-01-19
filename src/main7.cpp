#include <stdio.h>
#include <string.h>
#define N 256

int main()       //таблица встречаемости символов для введенной строки, содержится символ строки и число его повторений
{
	char str[N], arr[128] = { 0 };
	int i;

	printf("Enter a string: ");
	fgets(str, N, stdin);

	if (str[strlen(str) - 1] == '\n')  
		str[strlen(str) - 1] = '\0';

	for (i = 0; str[i] != '\0';i++)  //считаем повторения каждого символа
		arr[str[i]]++;
	

	for (i = 0; str[i] != '\0';i++)  //если символ встречался, печатаем его и кол-во его повторений
	{
		
		if (arr[str[i]] > 0)
		{
			printf("%c %d\n", str[i], arr[str[i]]);
			arr[str[i]] = 0;
		}
	}

	return 0;
}