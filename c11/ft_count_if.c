#include <stdlib.h>
#include <stdio.h>
int ft_count_if(char **tab, int length, int(*f)(char*))
{
    int i;
    int count;

    i = 0;
    count=0;
    while(i < length)
    {
        if(f(tab[i]))
        {
           count++;
        }
        i++;
    }
    return count;
}

int isHere(char *a)
{
    if(!(*a==*"f"))
        return 1;
    else 
        return 0;
}
int main()
{
    char *problem[4]={"a", "c" , "f", "b"};
    printf("%lu\n", sizeof(problem) / sizeof(char*));
    int result=ft_any(problem,4,&isHere);
    printf("%d: is your result",result);
}