/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 10:31:47 by ymetinog          #+#    #+#             */
/*   Updated: 2024/07/24 19:49:24 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	len_gen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	str_cat(char *str, char *dest)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
	{
		str[i] = dest[j];
		i++;
		j++;
	}
	str[i] = '\0';
}

int	caculate(int size, char **strs, char *sep)
{
	int		all;
	int		i;

	i = 0;
	all = 0;
	while (i < size)
	{
		all += len_gen(strs[i]);
		i++;
	}
	i = 0;
	all += (size - 1) * len_gen(sep);
	return (all);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*src;
	int		all;
	int		i;

	i = 0;
	all = caculate(size, strs, sep);
	src = (char *)malloc((all + 1) * (sizeof(char)));
	if (size == 0)
		return (src);
	while (i < size)
	{
		str_cat(src, strs[i]);
		if (i < (size - 1))
		{
			str_cat(src, sep);
		}
		i++;
	}
	return (src);
}
int main()
{
 	char *a[]={"yusuf" , "42", "kocaeli"};
 	char *sep=" cCc ";
	char *result = ft_strjoin(3,a,sep);
	printf("%s",result);

}