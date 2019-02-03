/*
 Программа имитирует падение бомбы с заданной пользователем высоты
 */

#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include "task1.h"

int main() {
    
    //int t; // прошедшее время в секундах
    int startHeight; // начальная высота падения бомбы, которая задается пользователем
    int currTime = 0; // время свободного падения бомбы
    printf("Enter height: ");
    scanf("%d", &startHeight);
    
    while (height(currTime, startHeight) > 0) {

        printf("t = %d \t height=%.2f \n", currTime, height(currTime, startHeight));
        
        /*sleep(1); // задержка в секунду в Linux*/
        unsigned int retTime = time(0) + 1; // кроссплатформенный вариант задержки времени
        while (time(0) < retTime);
        
        currTime++;
        
    }
        printf("BABAH!!!");
    return 0;
    }
