#include <time.h>
#include <stdlib.h>

char * password(char * line)
{
    int j = 0, len = 8, ch;

    for(j=0; j<len; j++)
    {
        ch = rand() % 3;
        switch(ch)
        {
        case 1: line[j] = rand() % ('Z'-'A'+1) + 'A';
            break;
        case 2: line[j] = rand() % ('z'-'a'+1) + 'a';
            break;
        default: line[j] = rand() % ('9'-'0'+1) + '0';
            break;
        }
        line[len] = 0;
    }
    return line;
}
