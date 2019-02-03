//
//  main.cpp
//  C-lab-2
//
//  Created by Антон Петров on 17/12/2018.
//  Copyright © 2018 Антон Петров. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task6.h"

#define N 100


int main(){
    
    char line [N];
    printf("Enter a string: \n");
    fgets(line, N, stdin);
    
    clear(line);
    printf("%s", line);
    
    
    return 0;
}
