#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"


int turn(int value, int secret){
    
    if ((value - secret) < 0) {
        return -1;
    }else if ((value - secret) > 0) {
        return 1;
    } else if ((value - secret) == 0) {
        return 0;
    } else return -2;
}
