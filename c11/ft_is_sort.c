#include <stdlib.h>
#include <stdio.h>
int ishavediff(int *a,int size)
{
    int i=0;
    while(i < size-2)
    {
        if(!(a[i]==a[i+1]))
            return 0;
        i++;
    }
    return 1;
}
int isSorted(int a,int b)
{
    if (a > b)
        return 1;
    else if (a < b)
        return -1;
    else
        return 0; 
}
int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
    int i=0;
    int sortresults[length-1];
    while(i<length-1)
    {
        sortresults[i]=f(tab[i],tab[i+1]);
        i++;
    }
    int lastres=ishavediff(sortresults,length);
    return (lastres);
}
int main()
{
    int tab[]={6,5,4,3,2,1};
    int len = sizeof(tab) / sizeof(tab[0]);
    int issorted=ft_is_sort(tab,len,&isSorted);
    if(issorted==0) printf("%d: your list is not sorted!",issorted);
    else printf("%d: your list is sorted!",issorted);
}