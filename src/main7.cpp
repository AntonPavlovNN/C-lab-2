#include<stdio.h>
#include<string.h>
#define N 256

int main()
{
    char buf [N]={0};
    char clean_buf[N]={0};
    int arr [N]={0};
    int M=0, L=0;
    int k=0;

    printf("Enter a string: \n");
    fgets(buf, N, stdin);
    if(buf[strlen(buf)-1]=='\n')
        buf[strlen(buf)-1]='\0';
    M=(int)strlen(buf);

    for(int i=0;i<=M;i++)
    {
        if(buf[i]==' ')
            continue;
        else
            clean_buf[k]=buf[i];
        k++;
    }
    printf("%s\n", clean_buf);

    L=(int)strlen(clean_buf);

    for(int i=0;i<L;i++)
    {
        arr[(unsigned char)clean_buf[i]]++;
    }

    for (int i=0;i<N;i++)
    {
        if(arr[i])
            printf("%c - %d\n", i, arr[i]);
    }

    return 0;
}
