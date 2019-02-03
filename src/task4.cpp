#include <stdio.h>
#include <string.h>

char* process(char* line){
    int str;
    int letter = 0;
    str = strlen(line); // реализуем метод простой сортировки
    for(int i = 0; i < str; i++){ // движемся с двух концов навстречу друг другу; 
        for(int j = str - 1; j > i; j--){
            if ((line[i] >= '0' && line[i] <= '9') && (line[j] >= 'a' && line[j] <= 'z')) {
                letter = line[j];
                line[j] = line[i];
                line[i] = letter;
                break;
            }
            else;
            }
    }
    return line;
}
