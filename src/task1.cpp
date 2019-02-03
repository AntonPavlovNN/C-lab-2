#include <stdio.h>
#include "task1.h"

float height(int currTime,int startHeight) {
    const float g = 9.81;
    float h;
    h = g*currTime*currTime/2; // пройденное расстояние
    float toGraund = startHeight - h; //расстояние до земли
    return (toGraund >= 0 ? toGraund : 0); //если переменная больше или равна 0 - вывести ее значение, иначе 0
}
