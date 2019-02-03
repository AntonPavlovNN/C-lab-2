#include <string.h>
#include <ctype.h>

char* process(char* line)

{
    int i, j, temp, str = strlen(line);

    for (i = 0; i < str; i++)
    {
        if (isalpha(line[i]))
            continue;

        for (j = str; j > i; j--)
        if (isalpha(line[j]))
        {
            temp = line[i];
            line[i] = line[j];
            line[j] = temp;
            str = j - 1;
            break;
        }
    }
    return line;
}
