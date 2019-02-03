#include <stdio.h>
#include "task6.h"
#define N 256

int main()
{
    char line[N];
    printf("Enter a string: ");
    fgets(line, N, stdin);
    clear(line);
    puts(line);
    return 0;
}

