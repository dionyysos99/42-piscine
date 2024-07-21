#include <stdlib.h>
#include <stdio.h>
int ft_any(char **tab, int(*f)(char*))
{
    while(*tab)
    {
        if(f(*tab))
        {
            return 1;
        }
        tab++;
    }
    return 0;
}
int isHere(char *a)
{
    if(a)
        return 1;
    else 
        return 0;
}
int main()
{
    char *problem[]={NULL,NULL,NULL};
    int result=ft_any(problem,&isHere);
    printf("%d: is your result",result);
}