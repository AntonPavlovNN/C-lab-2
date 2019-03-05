char * clear(char * line)
{
    int i=0;

    for(int j=0; line[j]!='\0'; j++)
    {
        if(line[j]!=' ')
        {
            if(line[j+1]!=' ')
            {
                line[i]=line[j];
                i++;
            }
            else
            {
                line[i]=line[j];
                i++;
                line[i]=line[j+1];
                i++;
            }
        }
    }

    if(i!=0 && line[i-1]==' ')
        line[i-1]='\0';
    else
        line[i]='\0';

    return line;
}
