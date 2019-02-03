#include "task3.h"
#include <stdio.h>

char * layout(char buf[],int line,int count) {
    // line - порядковый номер строки треугольника
    // count - общее количество строк
    for (int i = 0; i < count - line; i++)
        buf[i] = ' ';
    for (int i = count - line; i < count+line-1; i++)
        buf[i] = '*';
    buf[count+line-1] = '\0';
    return buf;
}
