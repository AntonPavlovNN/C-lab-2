#include <stdio.h>
#include "task4.h"

#define N 256

int main()
{
    char line[N];
    printf("Enter a string (mixed symbols and numbers): ");
    fgets(line, N, stdin);
    process(line);
    puts(line);
    return 0;
}
