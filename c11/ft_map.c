#include <stdlib.h>
#include <stdio.h>
int  *ft_map(int *tab, int length, int(*f)(int))
{
    int i;
    int *res;

    i=0;
    res=(int *)malloc((length - 1) *sizeof(int));
    while(i<length)
    {
        tab[i]=f(tab[i]);
        res[i]=tab[i];
        i++;
    }
    res[i]='\0';
    return res;
}
int modulustwo(int numb)
{
    int modulus =numb % 2 ;
    return modulus;
}
int main()
{
    int tab[]={42 ,42 ,42 ,42 };
    int size = 4;
    int *res=ft_map(tab,size,&modulustwo);
    printf("%d,%d,%d,%d : is a new integer elements",res[0],res[1],res[2],res[3]);

}