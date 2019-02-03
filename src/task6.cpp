#include <stdio.h>
#include <string.h>

char * clear(char * line){
    unsigned long size = strlen(line);
    
    while (line[0] == ' ') {
        for (int i = 0; i < size; i++)
            line[i]=line[i+1];
        size--;
    }
    while(line[size - 1] == ' '){
        line[size - 1] = '\0';
        size--;
    }
    
    for (int i = 0; i < size; i++){
        while(line[i] == ' ' && line[i+1] == ' '){
            for (int j = i; j < size; j++){
                line[j] = line[j + 1];
            }
            size--;
        }
    }
    return line;
}

