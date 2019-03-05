#include<stdio.h>
#include<string.h>
#include"task6.h"
#define N 256
int main()
{
    char str[N]={0};
    printf("Enter a string: \n");
    fgets(str, N, stdin);
    if(str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
    clear(str);
    printf("%s", str);
    return 0;
}
