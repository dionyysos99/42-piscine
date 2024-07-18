#include <unistd.h>
void put_str(char *str)
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
    int i;

    i=1;
    if (argc>0)
    {
        while(argv[i])
        {
            put_str(argv[i]);
            i++;
        }
        write(1,"\n",1);
    }
    return 0;
}