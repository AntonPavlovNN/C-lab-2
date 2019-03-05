#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"task5.h"

int main()
{
    char str [256]={0};
    srand(time(NULL));
    for(int i=0; i<10;i++)
    {
        password(str);
        printf("%s\n", str);
    }
    return 0;
}
