#include <unistd.h>
void putstr(char *str)
{
    int i;

    i=0;
    while(str[i]!='\0')
    {
        write(1,&str[i],1);
        i++;
    }
}
int main(int argc, char** argv)
{
    if (argc>0)
    {
        putstr(argv[0]);
    }
    write(1,"\n",1);
    return (0);
}