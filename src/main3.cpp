#include<stdio.h>
#include"task3.h"

int main()
{
    int line=0, count=0;
    char buf[256];

    printf("Enter height: \n");
    scanf("%d", &count);

    for(line=1;line<=count;line++)
    {
        printf("%s", layout(buf,line,count));
        putchar('\n');
    }


    return 0;


}
