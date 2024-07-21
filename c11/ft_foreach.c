#include <unistd.h>
void ft_foreach(int *tab, int length, void(*f)(int))
{
    int i;

    i=0;
    while(i<length)
    {
        f(tab[i]);
        write(1,"\n",1);
        i++;
    }
}
void ft_putnbr(int numb)
{
    long nb=numb;
    char a;
    if(nb<0)
    {
        write(1,"-",1);
        ft_putnbr(-nb);
    }
    if(nb>=10)
    {
        ft_putnbr(nb/10);
    }
    a=nb%10+'0';
    write(1,&a,1);
}
int main()
{
    int tab[]={42 ,42 ,42 ,42 };
    int size = 4;
    ft_foreach(tab,size,&ft_putnbr);
}