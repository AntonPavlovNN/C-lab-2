#include <stdio.h>
#include "task3.h"
#define N 256

int main()
{
    char buf[N];
    int line, count;

    printf("Введите количество строк в треугольнике: \n");
    scanf("%d", &count);

    for (line = 1; line <=count; line++)
    {
        layout(buf, line, count);
        puts(buf);
    }

    return 0;
}
