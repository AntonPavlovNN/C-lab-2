#include<string.h>

char* process(char* line)
{
    int N=0;
    int i=0,j=0;
    char temp;
    N=(int)strlen(line);
    while(1)
    {
        for(i=0;i<=N-1;i++)
            if(line[i]>='0'&&line[i]<='9')
                break;

        for(j=N-1;j>=i-1;j--)
            if((line[j]>='a'&&line[j]<='z') || (line[j]>='A'&&line[j]<='Z'))
                break;

        if(j<i)
            break;
        temp=line[i];
        line[i]=line[j];
        line[j]=temp;
    }
    return line;
}
