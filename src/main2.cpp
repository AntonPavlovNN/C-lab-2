#include <stdio.h>
#include "task2.h"



int main()
{
    int value, secret;
    value = 0;
    secret = 7;

    printf("Я задумал число от 1 до 100, попробуй угадать: \n");
    scanf("%d", &value);

    while(value != secret)
    {

        if(turn(value, secret) == 1)
        {
            printf("Больше нужного \n");
            scanf("%d", &value);
        }
        if(turn(value, secret) == -1)
        {
            printf("Меньше нужного \n");
            scanf("%d", &value);
        }
    }
    printf("Угадал! \n");

    return 0;
}
