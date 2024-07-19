/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:23:02 by ymetinog          #+#    #+#             */
/*   Updated: 2024/07/15 22:56:24 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	size;

	if (!*to_find)
		return (str);
	size = 0;
	while (to_find[size])
	{
		size++;
	}
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i])
		{
			if (i == size - 1)
				return (str);
			i++;
		}
		str++;
	}
	return (0);
}
