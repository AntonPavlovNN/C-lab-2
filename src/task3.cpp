char * layout(char buf[],int line,int count)
{
    for(int j=0; j<count-line; j++)
        buf[j]=' ';
    for(int i=count-line; i<count+line-1;i++)
        buf[i]='*';
    buf[count+line-1]='\0';

    return buf;
}
