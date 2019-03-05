#include<stdio.h>
#include"task1.h"
#include<unistd.h>

const float g=9.81;

int main()
{
    int currTime=0;
    int startHeight=0;

    printf("Enter height: \n");
    scanf("%d", &startHeight);

    while(height(currTime,startHeight)>=0)
    {
        printf("%02d c\t%06.1f m\n",currTime, height(currTime,startHeight));
        sleep(1);
        currTime++;
    }
    printf("BABAH\n");

    return 0;
}
