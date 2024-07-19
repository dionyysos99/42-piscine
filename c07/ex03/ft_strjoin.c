#include <stdlib.h>
#include <stdio.h>
int len_gen(char *str)
{
	int i;
	i=0;
	while(str[i])
	{
		i++;
	}
	return i;
}
void str_cat(char *str,char *dest)
{
	int i;
	int j;
	i=0;
	j=0;
	while (str[i])
	{
		i++;
	}
	while(dest[j])
	{
		str[i]=dest[j];
		i++;
		j++;
	}
	str[i]='\0';
	
}
char *ft_strjoin(int size, char **strs,char *sep)
{
	char *src;
	int all;
	int i;

	i=0;
	all=0;
	while(i<size)
	{
		all+=len_gen(strs[i]);
		i++;
	}
	i = 0;
	all+=(size -1) * len_gen(sep);
	src=(char *)malloc((all +1)* (sizeof(char)));
	while(i<size)
	{
		str_cat(src,strs[i]);
		if(i < (size -1))
		{
			str_cat(src,sep);
			i++;
		}
		i++;		
	}
	return src;
}
int main()
{
	char *str[]={"yusuf","metinoglu","31sever"};
	char *sep=" ";
	int size = len_gen(str)/sizeof(str[0]);
	char *result=ft_strjoin(size,str,sep);
	printf("%s",result);
	free(result);
}