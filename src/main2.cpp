/*
 "Угадай число"
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"

int main() {
    srand(time(0));
    int value = 0; // число пользователя
    int secret = 0; // число задуманное программой
    secret = 0 + rand() %100; // генерация числа
    printf("I conceived a number. Try to guess it.\n");
   
    while (turn(value, secret) != 0) { // цикл работает, пока пользователь не отгадает
        printf("Enter your number:");
        scanf("%d", &value);
        if (turn(value, secret) == 1)
            printf("too big\n");
        if (turn(value, secret) == -1)
            printf("too small\n");
    }
    
    if (turn(value, secret) == 0)
        printf("YOU WON!!!\n");
    }
