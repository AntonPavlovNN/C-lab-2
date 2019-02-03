/*
 Написать программу, выводящую таблицу встречаемости символов для введен-
 ной пользователем строки. В этой таблице содержится символ строки и число
 его повторений.
 Пояснение
 
 В этой программе мы стремимся к экономии времени, так что использование дополнительных массивов оправдано
 
 Состав
 
 Программа должна состоять из функции:
 
 main() .
 */

#include <stdio.h>
#include <string.h>

#define N 256

int main()
{
    char line[N];
    int str[255] = { 0 };
    int i;
    puts("Enter a string please:");
    fgets(line, N, stdin);
    unsigned long leight = strlen(line);
    
    
    for (i = 0; i < leight-1; i++)
        str[line[i]]++; // 
    
    for (i = 0; i < leight-1; i++)
    {
        if (str[line[i]] > 0)
        {
            printf("%c - %d\n", line[i], str[line[i]]);
            str[line[i]] = 0;
        }
    }
    
    
    return 0;
} 
