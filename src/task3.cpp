#include <stdio.h>

char * layout(char buf[],int line,int count)

{
    int i, j;

    for(i = 0; i < count - line; i++)
        buf[i] = ' ';

    for (j = 1; j <= line*2 - 1; j++, i++)
        buf[i] = '*';

    return buf;
}
