#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"task2.h"
void clean_stdin()
{
    int c;
    do{
        c=getchar();
    } while (c!='\n' && c!= EOF);
}

int main()
{
    srand(time(NULL));
    int secret=1+rand()%101;
    int value=0;
    printf("%d\n", secret);

    while(1)
    {
        printf("Enter the number: ");
        scanf("%d", &value);
        if(turn(value, secret)==1)
        {
           printf("Your number is larger\n");
           clean_stdin();
        }
        else if(turn(value, secret)==-1)
        {
           printf("Your number is smaller\n");
           clean_stdin();
        }
        else
            break;
    }
    printf("You guessed the number!\n");

    return 0;
}
