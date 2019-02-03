#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"

int main()
{
    srand(time(0));
    char line[128];
    for (int i=0; i<10; i++)
    {
    password(line);
    puts(line);
    }
    return 0;
}
