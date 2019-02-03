#include <stdio.h>
#include <unistd.h>
#include "task1.h"

int main()
{

    int startHeight;
    int currTime;

    printf("Задайте начальную высоту в метрах: \n");
    scanf("%d", &startHeight);

    for(currTime = 0; currTime >= 0 && height(currTime,startHeight) >=0 ; currTime++)
      {
        sleep(1);
        printf("t=%.2dc h=%fм\n", currTime, height(currTime,startHeight));
      }
        printf("BABAH!!!");

    return 0;
}
