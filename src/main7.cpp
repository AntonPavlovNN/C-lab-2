#include <stdio.h>
#define N 256

int main()
{
    char str[N];
    char present[128] = {0};

    printf("Enter a string: \n");
    fgets(str, N, stdin);
    int i;

    for (i = 0; str[i] != '\0'; i++)
        present[str[i]]++;

    for (i = 0; str[i] != '\0'; i++)
    {
            if (present[str[i]] != 0)
                printf("%c %d \n", str[i], present[str[i]]);
                present[str[i]] = 0;
    }

    return 0;

}
