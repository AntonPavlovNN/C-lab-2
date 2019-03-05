#include<stdlib.h>

char * password(char * line)
{
    const int len = 8;

    line[0]=rand()%('z'-'a'+1)+'a';
    line[1]=rand()%('Z'-'A'+1)+'A';
    line[2]=rand()%('9'-'0'+1)+'0';
    for( int i=3;i<len;i++)
    {
        int r=rand()%3;
        if(r==0)
            line[i]=rand()%('z'-'a'+1)+'a';
        if(r==1)
            line[i]=rand()%('Z'-'A'+1)+'A';
        if(r==2)
            line[i]=rand()%('9'-'0'+1)+'0';
    }
    for(int i=len-1; i>=1;i--)
    {
        int j=rand()%(i+1);
        int tmp = line[j];
        line[j]=line[i];
        line[i]=tmp;
    }

    line[8]='\0';

    return line;
}
